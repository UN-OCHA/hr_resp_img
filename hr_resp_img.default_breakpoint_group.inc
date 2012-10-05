<?php
/**
 * @file
 * hr_resp_img.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hr_resp_img_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_4';
  $breakpoint_group->name = 'Grid 4';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $export['grid_4'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_4_with_margin';
  $breakpoint_group->name = 'grid_4_with_margin';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $export['grid_4_with_margin'] = $breakpoint_group;

  return $export;
}

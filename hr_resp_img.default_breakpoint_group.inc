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
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.humanitarianresponse.mobile',
    1 => 'breakpoints.theme.humanitarianresponse.narrow',
    2 => 'breakpoints.theme.humanitarianresponse.normal',
    3 => 'breakpoints.theme.humanitarianresponse.wide',
  );
  $breakpoint_group->type = 'custom';
  $export['grid_4'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'grid_4_with_margin';
  $breakpoint_group->name = 'grid_4_with_margin';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.humanitarianresponse.mobile',
    1 => 'breakpoints.theme.humanitarianresponse.narrow',
    2 => 'breakpoints.theme.humanitarianresponse.normal',
    3 => 'breakpoints.theme.humanitarianresponse.wide',
  );
  $breakpoint_group->type = 'custom';
  $export['grid_4_with_margin'] = $breakpoint_group;

  return $export;
}

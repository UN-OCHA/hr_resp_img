<?php
/**
 * @file
 * hr_resp_img.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hr_resp_img_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_4';
  $picture_mapping->breakpoint_group = 'grid_4';
  $picture_mapping->mapping = array(
    'breakpoints.theme.humanitarianresponse.mobile' => array(
      '1x' => 'grid_4_mobile',
    ),
    'breakpoints.theme.humanitarianresponse.narrow' => array(
      '1x' => 'grid_4_narrow',
    ),
    'breakpoints.theme.humanitarianresponse.normal' => array(
      '1x' => 'grid_4_normal',
    ),
    'breakpoints.theme.humanitarianresponse.wide' => array(
      '1x' => 'grid_4_wide',
    ),
  );
  $export['grid_4'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'grid_4_with_margin';
  $picture_mapping->breakpoint_group = 'grid_4_with_margin';
  $picture_mapping->mapping = array(
    'breakpoints.theme.humanitarianresponse.mobile' => array(
      '1x' => 'grid_4_with_margin_mobile',
    ),
    'breakpoints.theme.humanitarianresponse.narrow' => array(
      '1x' => 'grid_4_with_margin_narrow',
    ),
    'breakpoints.theme.humanitarianresponse.normal' => array(
      '1x' => 'grid_4_with_margin_normal',
    ),
    'breakpoints.theme.humanitarianresponse.wide' => array(
      '1x' => 'grid_4_with_margin_wide',
    ),
  );
  $export['grid_4_with_margin'] = $picture_mapping;

  return $export;
}

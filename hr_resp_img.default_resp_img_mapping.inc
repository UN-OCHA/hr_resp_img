<?php
/**
 * @file
 * hr_resp_img.default_resp_img_mapping.inc
 */

/**
 * Implements hook_default_resp_img_mapping().
 */
function hr_resp_img_default_resp_img_mapping() {
  $export = array();

  $resp_img_mapping = new stdClass();
  $resp_img_mapping->disabled = FALSE; /* Edit this to true to make a default resp_img_mapping disabled initially */
  $resp_img_mapping->api_version = 1;
  $resp_img_mapping->machine_name = 'mappings.grid_4';
  $resp_img_mapping->breakpoint_group = 'grid_4';
  $resp_img_mapping->mapping = array(
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
  $export['mappings.grid_4'] = $resp_img_mapping;

  $resp_img_mapping = new stdClass();
  $resp_img_mapping->disabled = FALSE; /* Edit this to true to make a default resp_img_mapping disabled initially */
  $resp_img_mapping->api_version = 1;
  $resp_img_mapping->machine_name = 'mappings.grid_4_with_margin';
  $resp_img_mapping->breakpoint_group = 'grid_4_with_margin';
  $resp_img_mapping->mapping = array(
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
  $export['mappings.grid_4_with_margin'] = $resp_img_mapping;

  return $export;
}

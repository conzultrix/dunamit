<?php
/**
 * @file
 * dunamit_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dunamit_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dunamit_basic_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dunamit_basic_image_default_styles() {
  $styles = array();

  // Exported image style: product_full.
  $styles['product_full'] = array(
    'label' => 'Product Full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 580,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_grid.
  $styles['product_grid'] = array(
    'label' => 'Product Grid',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

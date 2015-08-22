<?php
/**
 * @file
 * dunamit_storyboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dunamit_storyboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dunamit_storyboard_node_info() {
  $items = array(
    'storyboard' => array(
      'name' => t('Storyboard'),
      'base' => 'node_content',
      'description' => t('Telling the Dunam-IT story: who we are what we do etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

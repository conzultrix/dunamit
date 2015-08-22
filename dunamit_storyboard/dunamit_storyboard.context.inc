<?php
/**
 * @file
 * dunamit_storyboard.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dunamit_storyboard_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'storyboard_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'storyboard' => 'storyboard',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dunamit_storyboard-storyboard_details' => array(
          'module' => 'dunamit_storyboard',
          'delta' => 'storyboard_details',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['storyboard_page'] = $context;

  return $export;
}

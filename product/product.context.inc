<?php
/**
 * @file
 * product.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function product_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'what-we-do' => 'what-we-do',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-products-block_1' => array(
          'module' => 'views',
          'delta' => 'products-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['product_page'] = $context;

  return $export;
}

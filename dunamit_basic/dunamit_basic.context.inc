<?php
/**
 * @file
 * dunamit_basic.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dunamit_basic_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'front',
    ),
  );
  $context->condition_mode = 1;
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'dunamit_info-telephone' => array(
          'module' => 'dunamit_info',
          'delta' => 'telephone',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-products-block' => array(
          'module' => 'views',
          'delta' => 'products-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'dunamit_info-dunamit_headoffice' => array(
          'module' => 'dunamit_info',
          'delta' => 'dunamit_headoffice',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'dunamit_info-dunamit_branches' => array(
          'module' => 'dunamit_info',
          'delta' => 'dunamit_branches',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'dunamit_basic-dunamit_copyright' => array(
          'module' => 'dunamit_basic',
          'delta' => 'dunamit_copyright',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}

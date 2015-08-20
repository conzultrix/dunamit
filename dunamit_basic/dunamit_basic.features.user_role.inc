<?php
/**
 * @file
 * dunamit_basic.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dunamit_basic_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}

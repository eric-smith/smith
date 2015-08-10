<?php
/**
 * @file
 * smith_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smith_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  return $permissions;
}

<?php
/**
 * @file
 * smith_ignore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smith_ignore_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

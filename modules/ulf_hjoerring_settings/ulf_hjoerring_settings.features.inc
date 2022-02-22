<?php

/**
 * @file
 * ulf_hjoerring_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ulf_hjoerring_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ulf_hjoerring_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ulf_hjoerring_settings_node_info() {
  $items = array(
    'education' => array(
      'name' => t('Uddannelse og job'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'internship' => array(
      'name' => t('Erhvervspraktik'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

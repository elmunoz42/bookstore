<?php
/**
 * @file
 * discount_coupon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function discount_coupon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function discount_coupon_node_info() {
  $items = array(
    'discount_coupon' => array(
      'name' => t('Discount Coupon'),
      'base' => 'node_content',
      'description' => t('Discount promotion with code'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

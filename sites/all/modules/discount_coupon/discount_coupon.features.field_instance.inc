<?php
/**
 * @file
 * discount_coupon.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function discount_coupon_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-discount_coupon-field_coupon_code'.
  $field_instances['node-discount_coupon-field_coupon_code'] = array(
    'bundle' => 'discount_coupon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coupon_code',
    'label' => 'coupon code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('coupon code');

  return $field_instances;
}

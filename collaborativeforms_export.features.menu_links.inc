<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_export_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:export
  $menu_links['primary-links:export'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'export',
    'router_path' => 'export',
    'link_title' => 'Export data',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Export data');


  return $menu_links;
}

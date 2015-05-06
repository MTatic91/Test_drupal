<?php
/**
 * @file
 * content_types_and_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function content_types_and_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_product-page:product-page
  $menu_links['main-menu_product-page:product-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-page',
    'router_path' => 'product-page',
    'link_title' => 'Product page',
    'options' => array(
      'identifier' => 'main-menu_product-page:product-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product page');


  return $menu_links;
}

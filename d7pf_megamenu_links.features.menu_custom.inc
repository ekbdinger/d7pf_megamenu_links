<?php
/**
 * @file
 * d7pf_megamenu_links.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function d7pf_megamenu_links_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-megamenu.
  $menus['menu-megamenu'] = array(
    'menu_name' => 'menu-megamenu',
    'title' => 'Mega Menu Test',
    'description' => 'trying out the Megamenu module',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mega Menu Test');
  t('trying out the Megamenu module');


  return $menus;
}

<?php
/**
 * @file
 * d7pf_megamenu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function d7pf_megamenu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-megamenu:<front>
  $menu_links['menu-megamenu:<front>'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Front Office',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-megamenu:node/12295
  $menu_links['menu-megamenu:node/12295'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12295',
    'router_path' => 'node/%',
    'link_title' => 'ERA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12312
  $menu_links['menu-megamenu:node/12312'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12312',
    'router_path' => 'node/%',
    'link_title' => 'Check In - Check Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12318
  $menu_links['menu-megamenu:node/12318'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12318',
    'router_path' => 'node/%',
    'link_title' => 'Tel/Web Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12346
  $menu_links['menu-megamenu:node/12346'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12346',
    'router_path' => 'node/%',
    'link_title' => 'ePrescriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12357
  $menu_links['menu-megamenu:node/12357'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12357',
    'router_path' => 'node/%',
    'link_title' => 'Imm. / Inj.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12359
  $menu_links['menu-megamenu:node/12359'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12359',
    'router_path' => 'node/%',
    'link_title' => 'PN - Billing Info.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12366
  $menu_links['menu-megamenu:node/12366'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12366',
    'router_path' => 'node/%',
    'link_title' => 'Anti-Coagulant FS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12368
  $menu_links['menu-megamenu:node/12368'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12368',
    'router_path' => 'node/%',
    'link_title' => 'Growth Chart',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12371
  $menu_links['menu-megamenu:node/12371'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12371',
    'router_path' => 'node/%',
    'link_title' => 'Printing/ Faxing PNs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12373
  $menu_links['menu-megamenu:node/12373'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12373',
    'router_path' => 'node/%',
    'link_title' => 'Lock - Unlock PN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12397
  $menu_links['menu-megamenu:node/12397'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12397',
    'router_path' => 'node/%',
    'link_title' => 'FQHC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12400
  $menu_links['menu-megamenu:node/12400'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12400',
    'router_path' => 'node/%',
    'link_title' => 'Ryan White HIV/AIDS Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/15261
  $menu_links['menu-megamenu:node/15261'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/15261',
    'router_path' => 'node/%',
    'link_title' => 'Product Activation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/15672
  $menu_links['menu-megamenu:node/15672'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/15672',
    'router_path' => 'node/%',
    'link_title' => 'PT Assessment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/16557
  $menu_links['menu-megamenu:node/16557'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/16557',
    'router_path' => 'node/%',
    'link_title' => 'Therapeutic Int.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Anti-Coagulant FS');
  t('Check In - Check Out');
  t('ERA');
  t('FQHC');
  t('Front Office');
  t('Growth Chart');
  t('Imm. / Inj.');
  t('Lock - Unlock PN');
  t('PN - Billing Info.');
  t('PT Assessment');
  t('Printing/ Faxing PNs');
  t('Product Activation');
  t('Ryan White HIV/AIDS Program');
  t('Tel/Web Encounters');
  t('Therapeutic Int.');
  t('ePrescriptions');


  return $menu_links;
}

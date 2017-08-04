<?php
/**
 * @file
 * kultur_frontpage.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function kultur_frontpage_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['domain']['kulturoen_dk'] = array();
  $realm_variables['domain']['midbib_stg_easysuite_dk'] = array(
  'site_mail' => 'bibitkom@middelfart.dk',
  'site_name' => 'Middelfart Kultur & Bibliotek',
  'site_slogan' => '',
);

return $realm_variables;
}

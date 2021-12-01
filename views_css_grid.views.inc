<?php
/**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function views_css_grid_views_plugins() {
  $module_path = backdrop_get_path('module', 'views_css_grid');

  return array(
    'style' => array(
      'views_css_grid_fill_plugin_style' => array(
        'title' => t('CSS Grid Fill'),
        'help' => t('Displays Views content in a CSS Grid Fill Style.'),
        'handler' => 'views_css_grid_fill_plugin_style',
        'theme' => 'views_css_grid_fill_plugin_style',
        'path' => $module_path . '/styles/fill',
        'theme path' => $module_path . '/styles/fill',
        'theme file' => 'views_css_grid_fill_theme.inc',
        'type' => 'normal',
        'parent' => 'default',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        //@TODO:  'uses row plugin' => FALSE, 'uses fields' => TRUE,
      ),
      'views_css_grid_fit_plugin_style' => array(
        'title' => t('CSS Grid Fit'),
        'help' => t('Displays Views content in a CSS Grid Fit Style.'),
        'handler' => 'views_css_grid_fit_plugin_style',
        'theme' => 'views_css_grid_fit_plugin_style',
        'path' => $module_path . '/styles/fit',
        'theme path' => $module_path . '/styles/fit',
        'theme file' => 'views_css_grid_fit_theme.inc',
        'type' => 'normal',
        'parent' => 'default',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        //@TODO:  'uses row plugin' => FALSE, 'uses fields' => TRUE,
      ),
      /*'views_css_grid_masonary_plugin_style' => array(
        'title' => t('CSS Grid Masonary'),
        'help' => t('Displays Views content in a CSS Grid Masonary Style.'),
        'handler' => 'views_css_grid_masonary_plugin_style',
        'theme' => 'views_css_grid_masonary_plugin_style',
        'path' => $module_path . '/styles/masonary',
        'theme path' => $module_path . '/styles/masonary',
        'theme file' => 'views_css_grid_masonary_theme.inc',
        'type' => 'normal',
        'parent' => 'default',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        //@TODO:  'uses row plugin' => FALSE, 'uses fields' => TRUE,
      ), */
    ),
  );
}

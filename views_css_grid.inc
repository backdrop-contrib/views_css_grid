<?php
/**
 * @file
 * Provide views data and handlers for views_css_grid module.
 */

/**
 * Implements hook_views_plugins().
 * 'handler' is for the Class which extends views_plugin_style.
 */
/*function views_css_grid_views_plugins() {
  $module_path = backdrop_get_path('module', 'views_css_grid');
  return array(
    'style' => array(
      'flexviews' => array(
        'title' => t('Views CSS Grid'),
        'handler' => 'views_css_grid_fill_plugin_style',
        'help' => t("Display Views content in A CSS Grid"),
        'theme' => 'views_view_views_css_grid',
        'type' => 'normal',
        'path' => $module_path,
        'theme path' => $module_path,
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
      ),
    ),
  );
}*/
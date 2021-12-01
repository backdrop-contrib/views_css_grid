<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_css_grid_fit_plugin_style(&$vars) {

  backdrop_add_css( backdrop_get_path('module', 'views_css_grid') . '/styles/fit/views_css_grid_fit.css', 
    array('type' => 'file',
      'preprocess' => TRUE,
      // Load very early so that it's very easy for other CSS to override it.
      'group' => CSS_SYSTEM,
      'weight' => -1000,
    )
  );


  // backdrop_set_message('<hr><br><pre>template_preprocess_views_css_grid_fill_plugin_style - $view<br>'. print_r($view, TRUE) .'</pre>');
    
  // Run preprocess function for unformatted style.
  template_preprocess_views_view_unformatted($vars);
  
  // Get view options.
  $view = $vars['view'];
  $options = $vars['options'];
}
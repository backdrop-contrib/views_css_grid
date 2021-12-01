<?php

/**
 * @file
 * Default view template to display content using views_grid_repeat layout_type.
 */

// Fit or fill the grid.
$layout_inline = $options['layout_inline'];

if ($layout_inline == 'inline_css') {
  // either 'fit_grid' or 'fill_frid'.
  $layout_type = $options['layout_type'];

  // Width of the column or content.
  $layout_width_value = $options['layout_width_value'];

  // Minimum height of content.
  $layout_width_height = $options['layout_width_height'];

  // Unit of measure for the content value i.e. px or em etc.
  $layout_width_unit = trim($options['layout_width_unit']);

  // Pre and Post CSS.
  $css_width_value = '';
  $css_width_value = strval($layout_width_value) . $layout_width_unit;
  
  $css_width_height = '';
  $css_width_height = strval($layout_width_height) . $layout_width_unit;

  $css_style = '';
  $css_style = 'style="display:grid;grid-template-columns:repeat(auto-fit, minmax(' . $css_width_value . ', 1fr)); min-height:' . $css_width_height . ';"';

  // The four extra dashes after 'container' below are a holding place for string replacement.
  $div_class = '';
  $div_class = '<div class="grid-repeat-container-fit" ';
  
  print $div_class . $css_style . '>';
  
  if (!empty($title)) {
    print "<h3>$title</h3>";
  }

  foreach ($rows as $id => $row) {
    if ($row_classes[$id]) {
      print '<div class="' . implode(' ', $row_classes[$id]) . '">' . $row . '</div>';
    }
  }
  print '</div>';
}
else
{
  print '<div class="views-grid-repeat">';
  if (!empty($title)) {
    print "<h3>$title</h3>";
  }

  foreach ($rows as $id => $row) {
    if ($row_classes[$id]) {
      print '<div class="' . implode(' ', $row_classes[$id]) . '">' . $row . '</div>';
    }
  }
  print '</div>';
}
<?php
/**
 * @file
 * Qwidget admin options
 */
function islandora_questionpoint_qwidget_admin_form($form, $form_settings) {
  $form['islandora_questionpoint_qwidget_site_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Your Questionpoint Site ID'),
    '#description' => t('Find your site ID in your Qwidget code.'),
    '#default_value' => variable_get('islandora_questionpoint_qwidget_site_id', '000000'),
  );

  $form['islandora_questionpoint_qwidget_colour'] = array(
    '#type' => 'radios',
    '#title' => t('Colour'),
    '#description' => t('The colour of your Qwidget.'),
    '#options' => array(
      'red' => t('Red'), 
      'blue' => t('Blue'),
      'black' => t('Black'),
      'gray' => t('Gray'),
      'green' => t('Green'),
      'mint' => t('Mint'),
      'popsicle' => t('Popsicle'),
    ),
    '#default_value' => variable_get('islandora_questionpoint_qwidget_colour', 'red'),
  );

  $form['islandora_questionpoint_qwidget_size'] = array(
    '#type' => 'radios',
    '#title' => t('Qwidget size'),
    '#description' => t('The size of your Qwdiget. "Fill" will fill the entire block.'),
    '#options' => array(
      'standard' => t('Regular - 190 x 275 px'),
      'small' => t('Small - 160 x 250 px'),
      'fill' => t('Fill the container'),
    ),
    '#default_value' => variable_get('islandora_questionpoint_qwidget_size', 'standard'),
  );
  
  return system_settings_form($form);
}


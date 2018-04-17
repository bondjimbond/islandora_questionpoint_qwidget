<?php

/**
 * @file
 * Utility functions.
 */

/**
 * Take URI, return HTML code for a rights statement badge.
 * @return string
 */
function islandora_questionpoint_qwidget_get_html() {
  $size = variable_get('islandora_questionpoint_qwidget_size', 'standard');
  $colour = variable_get('islandora_questionpoint_qwidget_colour', 'red');
  $inst_id = variable_get('islandora_questionpoint_qwidget_site_id', '00000');
  $qwidget_code = '<div id="questionpoint.chatwidget1" qwidgetno="1" ></div> <script id="questionpoint.bootstrap1" qwidgetno="1" type="text/javascript" src="https://www.questionpoint.org/crs/qwidgetV4/js/qwidget.bootstrapnj.js?langcode=1&instid=' . $inst_id . '&skin=' . $colour . '&size=' . $size . '" charset="utf-8">//<noscript>Please enable javascript to chat with librarians online</noscript></script>';
  return $qwidget_code;
}

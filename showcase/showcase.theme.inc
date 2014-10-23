<?php

function showcase_preprocess_node(&$vars) {
  $node = $vars['node'];
  if ($node->type == 'showcase') {
    $title = '<div class="field--title"><h2>' . $node->title . '</h2></div>';
    $body = '<div class="field--body">' . $node->body[LANGUAGE_NONE][0]['safe_summary'] . '</div>';
    
    $link = '<div class="field--node-link"><div class="btn">' . l(t('Learn More'), 'node/' . $node->nid) . '</div></div>';
    
    $vars['showcase_formatted_info'] = '<div class="overlay">' .
      $title . $body . $link .
    '</div>';
  }
}


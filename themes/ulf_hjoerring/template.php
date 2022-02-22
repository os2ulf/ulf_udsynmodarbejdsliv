<?php

/**
 * Implements hook_preprocess_user_profile().
 */
function ulf_hjoerring_preprocess_user_profile(&$variables) {
  // Enable a view for user profile templates.
  $variables['content_by_user_educations']
    = views_embed_view('hjoerring_content_by_user', 'block_4');
  $variables['content_by_user_internships']
    = views_embed_view('hjoerring_content_by_user', 'block_3');

}

function ulf_hjoerring_preprocess_page(&$variables) {
  if ($variables['theme_hook_suggestions'][0] === 'page__nyheder') {
    $blockObject = block_load('mailchimp_signup', 'signup_to_newsletter');
    $block = _block_get_renderable_array(_block_render_blocks([$blockObject]));
    $variables['newsletter_subscription_form'] = $block;
  }
}

function ulf_hjoerring_preprocess_node(&$variables) {
  $path = current_path();
  $path_alias = drupal_lookup_path('alias',$path);

  if ($path_alias == 'nyhedsbrev') {
    $blockObject = block_load('mailchimp_signup', 'signup_to_newsletter');
    $block = _block_get_renderable_array(_block_render_blocks([$blockObject]));
    $variables['newsletter_subscription_form'] = $block;
    $variables['theme_hook_suggestions'][]='node__nyhedsbrev';
  }
}


/**
* Implements template_preprocess_comment().
*/
function ulf_hjoerring_preprocess_comment(&$variables) {
  unset($variables['content']['links']['comment']['#links']['comment-reply']);
}

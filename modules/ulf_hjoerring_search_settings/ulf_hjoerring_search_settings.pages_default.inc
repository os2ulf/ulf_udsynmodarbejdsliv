<?php

/**
 * @file
 * ulf_hjoerring_search_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ulf_hjoerring_search_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_companies';
  $page->task = 'page';
  $page->admin_title = 'Search - companies';
  $page->admin_description = '';
  $page->path = 'virksomheder';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'main-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_companies__panel_context_5f2933d8-fe15-4a56-abe5-0f1fcca0c69a';
  $handler->task = 'page';
  $handler->subtask = 'search_companies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4f9c8e83-df13-485e-93a4-1100a46f8175';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_companies__panel_context_5f2933d8-fe15-4a56-abe5-0f1fcca0c69a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e528991d-a754-4b7d-a8f6-c9e0ab408e90';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_node' => array(
      'id' => '1581494849',
      'server' => 'search_node',
      'index' => 'companies',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '2',
        'size' => '100',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'field_profile_name' => 'field_profile_name',
          'created' => 0,
          'field_branche' => 0,
          'field_location' => 0,
          'field_lokation' => 0,
          'field_profile_contact' => 0,
          'field_profile_description:value' => 0,
          'field_profile_entry' => 0,
          'field_profile_logo:file' => 0,
          'field_profile_mail' => 0,
          'field_profile_phone' => 0,
          'field_tilbudsforpligtelser' => 0,
          'roles' => 0,
          'search_api_language' => 0,
          'uid' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_branche' => 'field_branche',
            'field_lokation' => 'field_lokation',
            'field_tilbudsforpligtelser' => 'field_tilbudsforpligtelser',
          ),
          'boolean' => array(
            'field_garantipartner' => 0,
          ),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_branche' => 'and',
          'field_lokation' => 'and',
          'field_tilbudsforpligtelser' => 'and',
        ),
      ),
      'sorting' => array(
        'field' => 'field_profile_name',
        'order' => 'asc',
      ),
      'dates' => array(
        'fields' => array(),
      ),
      'intervals' => array(
        'fields' => array(
          'created' => 0,
          'field_branche' => 0,
          'field_location' => 0,
          'field_lokation' => 0,
          'field_profile_contact' => 0,
          'field_profile_description:value' => 0,
          'field_profile_entry' => 0,
          'field_profile_logo:file' => 0,
          'field_profile_mail' => 0,
          'field_profile_name' => 0,
          'field_profile_phone' => 0,
          'field_tilbudsforpligtelser' => 0,
          'roles' => 0,
          'search_api_language' => 0,
          'uid' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => '_none_',
        'selected' => array(),
      ),
      'highlight' => array(
        'fields' => array(
          'created' => 0,
          'field_branche' => 0,
          'field_location' => 0,
          'field_lokation' => 0,
          'field_profile_contact' => 0,
          'field_profile_description:value' => 0,
          'field_profile_entry' => 0,
          'field_profile_logo:file' => 0,
          'field_profile_mail' => 0,
          'field_profile_name' => 0,
          'field_profile_phone' => 0,
          'field_tilbudsforpligtelser' => 0,
          'roles' => 0,
          'search_api_language' => 0,
          'uid' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => 'sites/udsynmodarbejdsliv.dk/themes/ulf_hjoerring/templates/search/angular/search-users.html',
        'result' => 'sites/udsynmodarbejdsliv.dk/themes/ulf_hjoerring/templates/search/angular/results-users.html',
        'pager' => 'profiles/ulf/themes/ulf_default/templates/search/angular/pager.html',
        'popup' => 'profiles/ulf/themes/ulf_default/templates/search/angular/popup-users.html',
      ),
      'autocomplete' => array(
        'index' => '_none_',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '10000',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e528991d-a754-4b7d-a8f6-c9e0ab408e90';
  $display->content['new-e528991d-a754-4b7d-a8f6-c9e0ab408e90'] = $pane;
  $display->panels['middle'][0] = 'new-e528991d-a754-4b7d-a8f6-c9e0ab408e90';
  $pane = new stdClass();
  $pane->pid = 'new-f596440d-6462-4d03-847c-00398f872783';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f596440d-6462-4d03-847c-00398f872783';
  $display->content['new-f596440d-6462-4d03-847c-00398f872783'] = $pane;
  $display->panels['middle'][1] = 'new-f596440d-6462-4d03-847c-00398f872783';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e528991d-a754-4b7d-a8f6-c9e0ab408e90';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_companies'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_educations';
  $page->task = 'page';
  $page->admin_title = 'Search - Educations';
  $page->admin_description = '';
  $page->path = 'uddannelse-og-job';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Uddannelse og job',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_educations__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $handler->task = 'page';
  $handler->subtask = 'search_educations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_educations__panel_context_53ef60d7-27ce-4bd1-aa44-6737cd7bc12a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'search_node' => array(
      'id' => '1580996439',
      'server' => 'search_node',
      'index' => 'educations',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'author:field_profile_name' => 'author:field_profile_name',
          'title' => 'title',
          'author' => 0,
          'author:field_branche' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_competencies' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subjects_primary_school' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'author:field_branche' => 'author:field_branche',
            'field_competencies' => 'field_competencies',
            'field_subjects_primary_school' => 'field_subjects_primary_school',
            'field_target_group_sub' => 'field_target_group_sub',
          ),
          'boolean' => array(
            'author:field_garantipartner' => 'author:field_garantipartner',
            'field_period_full_year' => 0,
          ),
        ),
      ),
      'filters' => array(
        'type' => array(
          'author:field_branche' => 'and',
          'field_competencies' => 'or',
          'field_subjects_primary_school' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(
          'field_period:value' => 'field_period:value',
        ),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'author:field_branche' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_competencies' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subjects_primary_school' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => '_none_',
        'selected' => array(),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'author:field_branche' => 0,
          'author:field_profile_name' => 0,
          'author:url' => 0,
          'changed' => 0,
          'created' => 0,
          'field_competencies' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_location' => 0,
          'field_period:value2' => 0,
          'field_price' => 0,
          'field_subjects_primary_school' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => 'sites/udsynmodarbejdsliv.dk/themes/ulf_hjoerring/templates/search/angular/search-education.html',
        'result' => 'sites/udsynmodarbejdsliv.dk/themes/ulf_hjoerring/templates/search/angular/results-education.html',
        'pager' => 'profiles/ulf/themes/ulf_default/templates/search/angular/pager.html',
        'popup' => 'profiles/ulf/themes/ulf_default/templates/search/angular/popup-course.html',
      ),
      'autocomplete' => array(
        'index' => 'educations',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '10000',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfa56415-9735-4149-b13c-fecff6fecb10';
  $display->content['new-dfa56415-9735-4149-b13c-fecff6fecb10'] = $pane;
  $display->panels['middle'][0] = 'new-dfa56415-9735-4149-b13c-fecff6fecb10';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_educations'] = $page;

  return $pages;

}

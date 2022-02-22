<?php

/**
 * @file
 * ulf_hjoerring_search_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ulf_hjoerring_search_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function ulf_hjoerring_search_settings_default_search_api_index() {
  $items = array();
  $items['companies'] = entity_import('search_api_index', '{
    "name" : "Companies",
    "machine_name" : "companies",
    "description" : null,
    "server" : "search_node",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "search_node_indexes" : "",
      "fields" : {
        "created" : { "type" : "date" },
        "field_branche" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_garantipartner" : { "type" : "boolean" },
        "field_location" : { "type" : "string" },
        "field_lokation" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_profile_contact" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_profile_description:value" : { "type" : "text" },
        "field_profile_entry" : { "type" : "text" },
        "field_profile_logo:file" : { "type" : "integer", "entity_type" : "file" },
        "field_profile_mail" : { "type" : "text" },
        "field_profile_name" : { "type" : "text" },
        "field_profile_phone" : { "type" : "text" },
        "field_tilbudsforpligtelser" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "uid" : { "type" : "integer" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "location" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "field_name" : "field_location" }
        },
        "search_api_alter_role_filter" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : { "default" : "0", "roles" : { "7" : "7" } }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-47", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-46", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "-45", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "-44",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_user_content" : { "status" : 0, "weight" : "-43", "settings" : [] },
        "search_api_alter_user_status" : { "status" : 0, "weight" : "-42", "settings" : [] },
        "exclude" : {
          "status" : 1,
          "weight" : "-41",
          "settings" : { "fields" : { "name" : "field_garantipartner", "values" : "0" } }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "field_profile_entry" : true,
              "field_profile_mail" : true,
              "field_profile_name" : true,
              "field_profile_phone" : true,
              "field_profile_description:value" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['educations'] = entity_import('search_api_index', '{
    "name" : "Educations",
    "machine_name" : "educations",
    "description" : null,
    "server" : "search_node",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "education" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "search_node_indexes" : "1e755e6cdb1a489abc0d883efb86ccc3",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:field_branche" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "author:field_garantipartner" : { "type" : "boolean" },
        "author:field_profile_name" : { "type" : "text" },
        "author:url" : { "type" : "uri" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_competencies" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_full_description:value" : { "type" : "text" },
        "field_image:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_location" : { "type" : "string" },
        "field_period:value" : { "type" : "date" },
        "field_period:value2" : { "type" : "date" },
        "field_period_full_year" : { "type" : "boolean" },
        "field_price" : { "type" : "decimal" },
        "field_subjects_primary_school" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_target_group_sub" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-50",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-49", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-47", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "-46", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "-45",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "-44", "settings" : [] },
        "exclude" : {
          "status" : 0,
          "weight" : "-43",
          "settings" : { "fields" : { "name" : "", "values" : "" } }
        },
        "location" : {
          "status" : 1,
          "weight" : "-42",
          "settings" : { "field_name" : "field_location" }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "-41", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : { "title" : true }, "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

<?php
/**
 * @file
 * kultur_frontpage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kultur_frontpage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage__ding-frontpage-kultur-en"] = (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'page_ding_frontpage__ding-frontpage-kultur-en',
      'task' => 'page',
      'subtask' => 'ding_frontpage',
      'handler' => 'panel_context',
      'weight' => 1,
      'conf' => array(
        'title' => 'Ding frontpage (KulturØen)',
        'no_blocks' => 0,
        'pipeline' => 'ipe',
        'css_id' => '',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
        'body_classes_to_remove' => '',
        'body_classes_to_add' => '',
        'name' => 'ding-frontpage-kultur-en',
        'access' => array(
          'plugins' => array(
            0 => array(
              'name' => 'domain',
              'settings' => array(
                'domain_site' => 0,
                'domains' => array(
                  'kulturoen_dk' => 'kulturoen_dk',
                  'midbib_stg_easysuite_dk' => 0,
                ),
              ),
              'not' => FALSE,
            ),
          ),
          'logic' => 'and',
        ),
        'display' => unserialize('O:14:"panels_display":15:{s:4:"args";a:0:{}s:7:"content";a:6:{s:40:"new-9c5bd4df-8a4a-43e6-84cf-c2a68d29cc82";O:8:"stdClass":12:{s:3:"pid";s:40:"new-9c5bd4df-8a4a-43e6-84cf-c2a68d29cc82";s:5:"panel";s:11:"s2_r_01_100";s:4:"type";s:13:"ding_nodelist";s:7:"subtype";s:13:"ding_nodelist";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:19:{s:9:"list_type";s:3:"all";s:12:"title_length";i:25;s:11:"body_length";i:100;s:14:"dynamic_switch";i:0;s:12:"nodes_switch";i:0;s:16:"autoscroll_delay";s:4:"3000";s:7:"columns";s:4:"full";s:23:"content_filter_promoted";i:0;s:19:"content_filter_date";i:1;s:5:"limit";s:1:"1";s:10:"more_links";a:0:{}s:19:"override_title_text";s:0:"";s:14:"selected_nodes";a:0:{}s:10:"sort_field";s:0:"";s:10:"sort_order";s:3:"asc";s:16:"taxonomy_filters";a:0:{}s:9:"unique_id";s:19:"pane-15022920193526";s:11:"widget_type";s:8:"carousel";s:13:"item_template";s:0:"";}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9c5bd4df-8a4a-43e6-84cf-c2a68d29cc82";}s:40:"new-b8687c50-435d-4bd4-aa64-4c51f742c0a8";O:8:"stdClass":13:{s:3:"pid";s:40:"new-b8687c50-435d-4bd4-aa64-4c51f742c0a8";s:5:"panel";s:11:"s2_r_05_033";s:4:"type";s:5:"block";s:7:"subtype";s:39:"ding_event_calendar-ding-event-calendar";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"b8687c50-435d-4bd4-aa64-4c51f742c0a8";}s:40:"new-881b2b35-2cfa-4803-b44c-6633150e6b96";O:8:"stdClass":13:{s:3:"pid";s:40:"new-881b2b35-2cfa-4803-b44c-6633150e6b96";s:5:"panel";s:11:"s2_r_05_033";s:4:"type";s:8:"campaign";s:7:"subtype";s:8:"campaign";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:7:{s:19:"ding_campaign_count";i:4;s:20:"ding_campaign_offset";i:0;s:25:"ding_campaign_image_style";s:18:"ding_campaign_p_33";s:7:"context";a:4:{i:0;s:5:"empty";i:1;s:5:"empty";i:2;s:5:"empty";i:3;s:5:"empty";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"881b2b35-2cfa-4803-b44c-6633150e6b96";}s:40:"new-2cc1ff3e-f1ca-4dbb-81a9-5228bc468e9e";O:8:"stdClass":12:{s:3:"pid";s:40:"new-2cc1ff3e-f1ca-4dbb-81a9-5228bc468e9e";s:5:"panel";s:11:"s2_r_05_066";s:4:"type";s:13:"ding_nodelist";s:7:"subtype";s:13:"ding_nodelist";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:20:{s:9:"list_type";s:3:"all";s:12:"title_length";i:25;s:11:"body_length";i:100;s:14:"dynamic_switch";i:0;s:12:"nodes_switch";i:0;s:16:"autoscroll_delay";N;s:7:"columns";s:4:"full";s:23:"content_filter_promoted";i:0;s:19:"content_filter_date";b:0;s:13:"content_types";a:1:{s:9:"ding_news";s:9:"ding_news";}s:5:"limit";s:1:"4";s:10:"more_links";a:0:{}s:19:"override_title_text";s:0:"";s:14:"selected_nodes";a:0:{}s:10:"sort_field";s:7:"created";s:10:"sort_order";s:4:"desc";s:16:"taxonomy_filters";a:0:{}s:9:"unique_id";s:19:"pane-14997729905857";s:11:"widget_type";s:8:"taxonomy";s:13:"item_template";s:0:"";}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"2cc1ff3e-f1ca-4dbb-81a9-5228bc468e9e";}s:40:"new-854794ff-b327-4c70-a4fa-a01b85351974";O:8:"stdClass":13:{s:3:"pid";s:40:"new-854794ff-b327-4c70-a4fa-a01b85351974";s:5:"panel";s:11:"s2_r_05_066";s:4:"type";s:15:"single_campaign";s:7:"subtype";s:15:"single_campaign";s:5:"shown";b:0;s:6:"access";a:0:{}s:13:"configuration";a:5:{s:15:"single_campaign";s:4:"1998";s:25:"ding_campaign_image_style";s:18:"ding_campaign_p_75";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"854794ff-b327-4c70-a4fa-a01b85351974";}s:40:"new-85775b9d-d1e4-4efa-a1c6-12d0dc2bbce4";O:8:"stdClass":12:{s:3:"pid";s:40:"new-85775b9d-d1e4-4efa-a1c6-12d0dc2bbce4";s:5:"panel";s:11:"s2_r_05_066";s:4:"type";s:5:"block";s:7:"subtype";s:31:"instagram_block-instagram_block";s:5:"shown";b:1;s:6:"access";a:0:{}s:5:"cache";a:0:{}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"85775b9d-d1e4-4efa-a1c6-12d0dc2bbce4";}}s:6:"panels";a:3:{s:11:"s2_r_01_100";a:1:{i:0;s:40:"new-9c5bd4df-8a4a-43e6-84cf-c2a68d29cc82";}s:11:"s2_r_05_033";a:2:{i:0;s:40:"new-b8687c50-435d-4bd4-aa64-4c51f742c0a8";i:1;s:40:"new-881b2b35-2cfa-4803-b44c-6633150e6b96";}s:11:"s2_r_05_066";a:3:{i:0;s:40:"new-2cc1ff3e-f1ca-4dbb-81a9-5228bc468e9e";i:1;s:40:"new-854794ff-b327-4c70-a4fa-a01b85351974";i:2;s:40:"new-85775b9d-d1e4-4efa-a1c6-12d0dc2bbce4";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:21:"easyweb_frontend_page";s:15:"layout_settings";a:0:{}s:5:"cache";a:0:{}s:5:"title";s:0:"";s:4:"uuid";s:36:"6795d6ae-3c57-4fb4-b339-3d6373acce88";s:10:"hide_title";i:1;s:10:"title_pane";s:1:"0";}'),
      ),
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|access"] = array(
    'plugins' => array(
      0 => array(
        'name' => 'domain',
        'settings' => array(
          'domain_site' => 0,
          'domains' => array(
            'midbib_stg_easysuite_dk' => 'midbib_stg_easysuite_dk',
            'kultur_midbib_stg_easysuite_dk' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );

 return $overrides;
}

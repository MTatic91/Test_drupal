<?php
/**
 * @file
 * content_types_and_views.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function content_types_and_views_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'page',
      2 => 'products',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}

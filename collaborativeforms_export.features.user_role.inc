<?php

/**
 * Implementation of hook_user_default_roles().
 */
function collaborativeforms_export_user_default_roles() {
  $roles = array();

  // Exported role: statistician
  $roles['statistician'] = array(
    'name' => 'statistician',
  );

  return $roles;
}

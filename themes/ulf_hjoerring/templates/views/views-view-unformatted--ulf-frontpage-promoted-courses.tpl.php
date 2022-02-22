<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="teaser--list">
  <?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
  <?php endforeach; ?>
</div>
<a href="/erhvervspraktik" class="is-daycare teaser--list-button"><?php print t('View all internships');?></a>
<a href="/uddannelse-og-job" class="is-school teaser--list-button"><?php print t('View all educations');?></a>

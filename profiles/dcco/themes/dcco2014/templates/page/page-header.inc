<header id="header">
  <div class="l--constrained">
    <div id="branding">
      <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><?php print $site_name; ?></a></h1>
      <?php if ($site_slogan): ?>
        <h2 id="site-slogan">
         <?php print $site_slogan; ?>
        </h2>
      <?php endif; ?>
    </div>
    <?php if ($page['utility']): ?>
      <div id="utility">
        <?php print render($page['utility']); ?>
      </div>
    <?php endif; // end utility ?>
    <?php if ($page['header']): ?>
        <?php print render($page['header']); ?>
    <?php endif; // end header ?>
  </div>
</header>

<?php if ($page['navigation']): ?>
  <div id="navigation" class="clearfix">
    <div class="l--constrained">
      <?php print render($page['navigation']); ?>
    </div>
  </div>
<?php endif; // end navigation?>

<?php if ($is_front): ?>
  <div id="masthead">
    <div class="l--constrained">
      <img src="/profiles/dcco/themes/dcco2014/img/logo-dcco-white.png" alt="DrupalCamp Colorado 2014" />
      <a href="#" class="button--secondary">Register</a>
    </div>
  </div>
<?php endif; ?>

/* GIO - GLib Input, Output and Streaming Library
 *
 * Copyright © 2010 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the licence or (at
 * your option) any later version.
 *
 * See the included COPYING file for more information.
 */

#ifndef __G_TLS_OUTPUT_STREAM_GNUTLS_H__
#define __G_TLS_OUTPUT_STREAM_GNUTLS_H__

#include <gio/gio.h>
#include "gtlsconnection-gnutls.h"

G_BEGIN_DECLS

#define G_TYPE_TLS_OUTPUT_STREAM_GNUTLS            (g_tls_output_stream_gnutls_get_type ())
#define G_TLS_OUTPUT_STREAM_GNUTLS(inst)           (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_OUTPUT_STREAM_GNUTLS, GTlsOutputStreamGnutls))
#define G_TLS_OUTPUT_STREAM_GNUTLS_CLASS(class)    (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_OUTPUT_STREAM_GNUTLS, GTlsOutputStreamGnutlsClass))
#define G_IS_TLS_OUTPUT_STREAM_GNUTLS(inst)        (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_OUTPUT_STREAM_GNUTLS))
#define G_IS_TLS_OUTPUT_STREAM_GNUTLS_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_OUTPUT_STREAM_GNUTLS))
#define G_TLS_OUTPUT_STREAM_GNUTLS_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_OUTPUT_STREAM_GNUTLS, GTlsOutputStreamGnutlsClass))

typedef struct _GTlsOutputStreamGnutlsPrivate GTlsOutputStreamGnutlsPrivate;
typedef struct _GTlsOutputStreamGnutlsClass   GTlsOutputStreamGnutlsClass;
typedef struct _GTlsOutputStreamGnutls        GTlsOutputStreamGnutls;

struct _GTlsOutputStreamGnutlsClass
{
  GOutputStreamClass parent_class;
};

struct _GTlsOutputStreamGnutls
{
  GOutputStream parent_instance;
  GTlsOutputStreamGnutlsPrivate *priv;
};

GType          g_tls_output_stream_gnutls_get_type (void) G_GNUC_CONST;
GOutputStream *g_tls_output_stream_gnutls_new      (GTlsConnectionGnutls *conn);

G_END_DECLS

#endif /* __G_TLS_OUTPUT_STREAM_GNUTLS_H___ */

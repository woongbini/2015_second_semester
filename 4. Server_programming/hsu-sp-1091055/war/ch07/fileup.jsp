<%@ page import = "com.google.appengine.api.blobstore.BlobstoreServiceFactory" %>
<%@ page import = "com.google.appengine.api.blobstore.BlobstoreService" %>
<% BlobstoreService blobstoreService = 
	BlobstoreServiceFactory.getBlobstoreService(); %>
<html>
	<head>
		<title>upload Test</title>
	</head>
	<body>
		<form action="<%= blobstoreService.createUploadUrl("/upload") %>"
				method="post" enctype="multipart/form-data">
			<input type="text" name="foo">
			<input type="file" name="myFile">
			<input type="submit" name="Submit">
		</form>
	</body>
</html>
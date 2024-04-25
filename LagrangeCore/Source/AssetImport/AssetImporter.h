#pragma once

#include <memory>
#include "Math/Types.h"
#include "Geometry/Mesh.h"


namespace AssetImporter {

	std::shared_ptr<Mesh> import_mesh(float* mesh_vertex_buffer, size_t vertex_buffer_size, int* mesh_index_buffer, size_t index_buffer_size);
	std::shared_ptr<Mesh> import_mesh(float* mesh_vertex_buffer, size_t vertex_buffer_size, size_t vertex_buffer_offset, int* mesh_index_buffer, size_t index_buffer_size, size_t index_buffer_offset);
	std::shared_ptr<Mesh> import_mesh(const std::vector<float>& mesh_vertex_buffer, const std::vector<int>& mesh_index_buffer);
	std::shared_ptr<Mesh> import_mesh(const std::vector<float>& mesh_vertex_buffer, size_t vertex_buffer_offset, const std::vector<int>& mesh_index_buffer, size_t index_buffer_offset);

	std::shared_ptr<Mesh> import_mesh(double* mesh_vertex_buffer, size_t vertex_buffer_size, int* mesh_index_buffer, size_t index_buffer_size);
	std::shared_ptr<Mesh> import_mesh(double* mesh_vertex_buffer, size_t vertex_buffer_size, size_t vertex_buffer_offset, int* mesh_index_buffer, size_t index_buffer_size, size_t index_buffer_offset);
	std::shared_ptr<Mesh> import_mesh(const std::vector<double>& mesh_vertex_buffer, const std::vector<int>& mesh_index_buffer);
	std::shared_ptr<Mesh> import_mesh(const std::vector<double>& mesh_vertex_buffer, size_t vertex_buffer_offset, const std::vector<int>& mesh_index_buffer, size_t index_buffer_offset);


}
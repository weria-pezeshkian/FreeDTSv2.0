#if !defined(AFX_WritevtuFiles_H_7F4B21B8_D13C_9321_BF23_124095086234__INCLUDED_)
#define AFX_WritevtuFiles_H_7F4B21B8_D13C_9321_BF23_124095086234__INCLUDED_
/*
#include "SimDef.h"
#include "triangle.h"
#include "vertex.h"
#include "links.h"
#include "Vec3D.h"*/
#include "AbstractVisualizationFile.h"
/*
 Weria Pezeshkian (weria.pezeshkian@gmail.com)
 Copyright (c) Weria Pezeshkian
 An object for writing vtu files (to visualize the meshes using paraview).
 */
class State;
class WritevtuFiles : public AbstractVisualizationFile {
public:
    
      WritevtuFiles(State* pState, int period, std::string foldername);
	  WritevtuFiles(State* pState);
	 ~WritevtuFiles();
public:

    bool WriteAFrame(int step);
    bool OpenFolder();
    inline  std::string GetDerivedDefaultReadName()  {return "VTUFileFormat";}
     inline  static std::string GetDefaultReadName()   {return "VTUFileFormat";}
    std::string CurrentState();

    
private:
    void WriteInclusion(std::string id, const std::vector<vertex *>  &all_ver, std::ofstream *Output);



private:

    Vec3D *m_pBox;
    State* m_pState;
    std::string m_FolderName;

};
#endif

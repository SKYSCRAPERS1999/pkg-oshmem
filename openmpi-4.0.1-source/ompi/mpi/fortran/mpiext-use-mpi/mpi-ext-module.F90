! -*- fortran -*-
! $HEADER$
!
! *** THIS FILE IS AUTOMATICALLY GENERATED!
! *** Any manual edits will be lost!
!
#include "ompi/mpi/fortran/configure-fortran-output.h"

module mpi_ext
!     Even though this is not a useful parameter (cannot be used as a
!     preprocessor catch) define it to keep the linker from complaining
!     during the build.
      integer OMPI_HAVE_MPI_EXT
      parameter (OMPI_HAVE_MPI_EXT=1)
!
!
!     Enabled Extension: affinity
!     No "use mpi" bindings available
!

!
!     Enabled Extension: cuda
!     No "use mpi" bindings available
!

!
!     Enabled Extension: pcollreq
!
#include "./ompi/mpiext/pcollreq/mpif-h/mpiext_pcollreq_mpifh.h"
#include "./ompi/mpiext/pcollreq/use-mpi/mpiext_pcollreq_usempi.h"

!
end module mpi_ext

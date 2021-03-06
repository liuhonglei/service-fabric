// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once 

namespace ServiceModel
{
    class SchemaNames
    {
    public:
        static Common::GlobalWString const Namespace;
    
        static Common::GlobalWString const Element_ClusterManifest;
        static Common::GlobalWString const Element_ApplicationManifest;
        static Common::GlobalWString const Element_ServicePackage;
        static Common::GlobalWString const Element_ServiceManifestImport;
        static Common::GlobalWString const Element_ServiceManifestRef;
        static Common::GlobalWString const Element_ConfigOverridesRef;
        static Common::GlobalWString const Element_ResourceOverrides;
        static Common::GlobalWString const Element_ServiceManifest;
        static Common::GlobalWString const Element_Description;
        static Common::GlobalWString const Element_ServiceTypes;
        static Common::GlobalWString const Element_ServiceGroupTypes;
        static Common::GlobalWString const Element_DigestedServiceTypes;
        static Common::GlobalWString const Element_StatefulServiceType;
        static Common::GlobalWString const Element_StatelessServiceType;
        static Common::GlobalWString const Element_StatefulServiceGroupType;
        static Common::GlobalWString const Element_StatelessServiceGroupType;
        static Common::GlobalWString const Element_ServiceGroupMembers;
        static Common::GlobalWString const Element_ServiceGroupTypeMember;
        static Common::GlobalWString const Element_LoadMetrics;
        static Common::GlobalWString const Element_LoadMetric;
        static Common::GlobalWString const Element_PlacementConstraints;
        static Common::GlobalWString const Element_CodePackage;
        static Common::GlobalWString const Element_DigestedCodePackage;
        static Common::GlobalWString const Element_EntryPoint;
        static Common::GlobalWString const Element_ExeHost;
        static Common::GlobalWString const Element_Program;
        static Common::GlobalWString const Element_Arguments;
        static Common::GlobalWString const Element_WorkingFolder;
        static Common::GlobalWString const Element_ConsoleRedirection;
        static Common::GlobalWString const Element_SetupEntryPoint;
        static Common::GlobalWString const Element_ContainerHost;
        static Common::GlobalWString const Element_ContainerImageName;
        static Common::GlobalWString const Element_ContainerHostPolicies;
        static Common::GlobalWString const Element_RepositoryCredentials;
        static Common::GlobalWString const Element_HealthConfig;
        static Common::GlobalWString const Element_PortBinding;
        static Common::GlobalWString const Element_LogConfig;
        static Common::GlobalWString const Element_Volume;
        static Common::GlobalWString const Element_NetworkConfig;
        static Common::GlobalWString const Element_CertificateRef;
        static Common::GlobalWString const Element_DriverOption;
        static Common::GlobalWString const Element_SecurityOption;

        static Common::GlobalWString const Element_Commands;
        static Common::GlobalWString const Element_FromSource;
        static Common::GlobalWString const Element_DllHost;
        static Common::GlobalWString const Element_ManagedAssembly;
        static Common::GlobalWString const Element_UnmanagedDll;
        static Common::GlobalWString const Element_RunFrequency;        
        static Common::GlobalWString const Element_ConfigPackage;
        static Common::GlobalWString const Element_DigestedConfigPackage;
        static Common::GlobalWString const Element_DataPackage;
        static Common::GlobalWString const Element_DigestedDataPackage;
        static Common::GlobalWString const Element_ConfigParameter;
        static Common::GlobalWString const Element_ConfigSection;
        static Common::GlobalWString const Element_ConfigSettings;
        static Common::GlobalWString const Element_ServicePackageConfigOverrides;
        static Common::GlobalWString const Element_ConfigOverride;
        static Common::GlobalWString const Element_ConfigOverrides;
        static Common::GlobalWString const Element_Resources;
        static Common::GlobalWString const Element_DigestedResources;
        static Common::GlobalWString const Element_Certificates;
        static Common::GlobalWString const Element_DigestedCertificates;
        static Common::GlobalWString const Element_Endpoints;
        static Common::GlobalWString const Element_DigestedEndpoints;
        static Common::GlobalWString const Element_Endpoint;
        static Common::GlobalWString const Element_DigestedEndpoint;
        static Common::GlobalWString const Element_LogCollectionPolicies;
        static Common::GlobalWString const Element_LogCollectionPolicy;
        static Common::GlobalWString const Element_RunAsPolicy;
        static Common::GlobalWString const Element_DebugParameters;
        static Common::GlobalWString const Element_DefaultRunAsPolicy;
        static Common::GlobalWString const Element_SetupRunAsPolicy;
        static Common::GlobalWString const Element_SecurityAccessPolicy;
        static Common::GlobalWString const Element_EndpointBindingPolicy;
        static Common::GlobalWString const Element_PackageSharingPolicy;
        static Common::GlobalWString const Element_SecurityAccessPolicies;
        static Common::GlobalWString const Element_Policies;
        static Common::GlobalWString const Element_ApplicationPackage;
        static Common::GlobalWString const Element_ApplicationInstance;
        static Common::GlobalWString const Element_Parameters;
        static Common::GlobalWString const Element_ApplicationPackageRef;
        static Common::GlobalWString const Element_ServicePackageRef;
        static Common::GlobalWString const Element_ServiceTemplates;
        static Common::GlobalWString const Element_DigestedServiceTemplates;
        static Common::GlobalWString const Element_DefaultServices;
        static Common::GlobalWString const Element_DigestedDefaultServices;
        static Common::GlobalWString const Element_Environment;
        static Common::GlobalWString const Element_DigestedEnvironment;
        static Common::GlobalWString const Element_Service;
        static Common::GlobalWString const Element_ServiceGroup;
        static Common::GlobalWString const Element_NamedPartition;
        static Common::GlobalWString const Element_Partition;
        static Common::GlobalWString const Element_SingletonPartition;
        static Common::GlobalWString const Element_UniformInt64Partition;
        static Common::GlobalWString const Element_StatefulService;
        static Common::GlobalWString const Element_StatelessService;
        static Common::GlobalWString const Element_StatefulServiceGroup;
        static Common::GlobalWString const Element_StatelessServiceGroup;
        static Common::GlobalWString const Element_ServiceCorrelations;
        static Common::GlobalWString const Element_ServiceCorrelation;
        static Common::GlobalWString const Element_ServicePlacementPolicies;
        static Common::GlobalWString const Element_ServicePlacementPolicy;
        static Common::GlobalWString const Element_SecretsCertificate;
        static Common::GlobalWString const Element_EndpointCertificate;
        static Common::GlobalWString const Element_Members;
        static Common::GlobalWString const Element_Member;
        static Common::GlobalWString const Element_Principals;
        static Common::GlobalWString const Element_Groups;
        static Common::GlobalWString const Element_Group;
        static Common::GlobalWString const Element_Membership;
        static Common::GlobalWString const Element_Users;
        static Common::GlobalWString const Element_User;
        static Common::GlobalWString const Element_MemberOf;
        static Common::GlobalWString const Element_DomainGroup;
        static Common::GlobalWString const Element_SystemGroup;
        static Common::GlobalWString const Element_DomainUser;
        static Common::GlobalWString const Element_Extensions;
        static Common::GlobalWString const Element_Extension;
        static Common::GlobalWString const Element_Diagnostics;
        static Common::GlobalWString const Element_CrashDumpSource;
        static Common::GlobalWString const Element_ETWSource;
        static Common::GlobalWString const Element_FolderSource;
        static Common::GlobalWString const Element_Destinations;
        static Common::GlobalWString const Element_LocalStore;
        static Common::GlobalWString const Element_FileStore;
        static Common::GlobalWString const Element_AzureBlob;
        static Common::GlobalWString const Element_Parameter;
        static Common::GlobalWString const Element_AccountName;
        static Common::GlobalWString const Element_AccountPassword;
        static Common::GlobalWString const Element_AccountPasswordIsEncrypted;
        static Common::GlobalWString const Element_ETW;
        static Common::GlobalWString const Element_ProviderGuids;
        static Common::GlobalWString const Element_ProviderGuid;
        static Common::GlobalWString const Element_ManifestDataPackages;
        static Common::GlobalWString const Element_ManifestDataPackage;
        static Common::GlobalWString const Element_Node;
        static Common::GlobalWString const Element_NodeList;
        static Common::GlobalWString const Element_InfrastructureInformation;
        static Common::GlobalWString const Element_TargetInformation;
        static Common::GlobalWString const Element_HealthPolicy;
        static Common::GlobalWString const Element_DefaultServiceTypeHealthPolicy;
        static Common::GlobalWString const Element_ServiceTypeHealthPolicy;
        static Common::GlobalWString const Element_NTLMAuthenticationPolicy;
        static Common::GlobalWString const Element_CurrentInstallation;
        static Common::GlobalWString const Element_TargetInstallation;
        static Common::GlobalWString const Element_EnvironmentVariable;
        static Common::GlobalWString const Element_EnvironmentVariables;
        static Common::GlobalWString const Element_EnvironmentOverrides;
        static Common::GlobalWString const Element_ResourceGovernancePolicy;
        static Common::GlobalWString const Element_ServicePackageResourceGovernancePolicy;
        static Common::GlobalWString const Element_ContainerEntryPoint;
        static Common::GlobalWString const Element_ContainerMountedVolume;
        static Common::GlobalWString const Element_ContainerEnvironmentBlock;
        static Common::GlobalWString const Element_ImageOverrides;
        static Common::GlobalWString const Element_Image;

        static Common::GlobalWString const Attribute_ApplicationId;
        static Common::GlobalWString const Attribute_ApplicationTypeName;
        static Common::GlobalWString const Attribute_ApplicationTypeVersion;
        static Common::GlobalWString const Attribute_Name;
        static Common::GlobalWString const Attribute_ServiceDnsName;
        static Common::GlobalWString const Attribute_ServicePackageActivationMode;
        static Common::GlobalWString const Attribute_DefaultValue;
        static Common::GlobalWString const Attribute_Version;
        static Common::GlobalWString const Attribute_ManifestId;
        static Common::GlobalWString const Attribute_ManifestVersion;
        static Common::GlobalWString const Attribute_RolloutVersion;
        static Common::GlobalWString const Attribute_ManifestChecksum;
        static Common::GlobalWString const Attribute_ContentChecksum;        
        static Common::GlobalWString const Attribute_ServiceManifestName;
        static Common::GlobalWString const Attribute_ServiceManifestVersion;
        static Common::GlobalWString const Attribute_ServicePackageName;
        static Common::GlobalWString const Attribute_ServiceTypeName;
        static Common::GlobalWString const Attribute_ServiceGroupTypeName;
        static Common::GlobalWString const Attribute_HasPersistedState;
        static Common::GlobalWString const Attribute_ReplicaRestartWaitDurationSeconds;
        static Common::GlobalWString const Attribute_QuorumLossWaitDurationSeconds;
        static Common::GlobalWString const Attribute_StandByReplicaKeepDurationSeconds;
        static Common::GlobalWString const Attribute_Weight;
        static Common::GlobalWString const Attribute_IsExternalExecutable;
        static Common::GlobalWString const Attribute_IsShared;
        static Common::GlobalWString const Attribute_Type;
        static Common::GlobalWString const Attribute_IntervalInSeconds;
        static Common::GlobalWString const Attribute_Value;
        static Common::GlobalWString const Attribute_MustOverride;
        static Common::GlobalWString const Attribute_DefaultLoad;
        static Common::GlobalWString const Attribute_PrimaryDefaultLoad;
        static Common::GlobalWString const Attribute_SecondaryDefaultLoad;
        static Common::GlobalWString const Attribute_DefaultMoveCost;
        static Common::GlobalWString const Attribute_Protocol;
        static Common::GlobalWString const Attribute_CertificateRef;
        static Common::GlobalWString const Attribute_Port;
        static Common::GlobalWString const Attribute_NameRef;
        static Common::GlobalWString const Attribute_CodePackageRef;
        static Common::GlobalWString const Attribute_DataPackageRef;
        static Common::GlobalWString const Attribute_DataPackageVersion;
        static Common::GlobalWString const Attribute_PackageRef;
        static Common::GlobalWString const Attribute_UserRef;
        static Common::GlobalWString const Attribute_EntryPointType;
        static Common::GlobalWString const Attribute_ResourceRef;
        static Common::GlobalWString const Attribute_PrincipalRef;
        static Common::GlobalWString const Attribute_EndpointRef;
        static Common::GlobalWString const Attribute_ProgramExePath;
        static Common::GlobalWString const Attribute_DebuggerArguments;
        static Common::GlobalWString const Attribute_EnvironmentBlock;
        static Common::GlobalWString const Attribute_Path;
        static Common::GlobalWString const Attribute_GrantRights;
        static Common::GlobalWString const Attribute_IsolationPolicy;
        static Common::GlobalWString const Attribute_PartitionCount;
        static Common::GlobalWString const Attribute_LowKey;
        static Common::GlobalWString const Attribute_HighKey;
        static Common::GlobalWString const Attribute_TargetReplicaSetSize;
        static Common::GlobalWString const Attribute_MinReplicaSetSize;
        static Common::GlobalWString const Attribute_InstanceCount;
        static Common::GlobalWString const Attribute_UseImplicitFactory;
        static Common::GlobalWString const Attribute_Scheme;
        static Common::GlobalWString const Attribute_ServiceName;
        static Common::GlobalWString const Attribute_DomainName;
        static Common::GlobalWString const Attribute_X509StoreLocation;
        static Common::GlobalWString const Attribute_X509StoreName;
        static Common::GlobalWString const Attribute_X509FindType;
        static Common::GlobalWString const Attribute_X509FindValue;
        static Common::GlobalWString const Attribute_X509FindValueSecondary;
        static Common::GlobalWString const Attribute_X509Thumbprint;
        static Common::GlobalWString const Attribute_UseImplicitHost;
        static Common::GlobalWString const Attribute_FileRetentionCount;
        static Common::GlobalWString const Attribute_FileMaxSizeInKb;
        static Common::GlobalWString const Attribute_NameUri;
        static Common::GlobalWString const Attribute_IsEncrypted;
        static Common::GlobalWString const Attribute_IsPasswordEncrypted;
        static Common::GlobalWString const Attribute_NodeName;
        static Common::GlobalWString const Attribute_IPAddressOrFQDN;
        static Common::GlobalWString const Attribute_RoleOrTierName;
        static Common::GlobalWString const Attribute_NodeTypeRef;
        static Common::GlobalWString const Attribute_IsSeedNode;
        static Common::GlobalWString const Attribute_FaultDomain;
        static Common::GlobalWString const Attribute_UpgradeDomain;
        static Common::GlobalWString const Attribute_AccountType;
        static Common::GlobalWString const Attribute_Password;
        static Common::GlobalWString const Attribute_AccountName;
        static Common::GlobalWString const Attribute_PasswordEncrypted;
        static Common::GlobalWString const Attribute_LoadUserProfile;
        static Common::GlobalWString const Attribute_PerformInteractiveLogon;
        static Common::GlobalWString const Attribute_ConsiderWarningAsError;
        static Common::GlobalWString const Attribute_MaxPercentUnhealthyDeployedApplications;
        static Common::GlobalWString const Attribute_MaxPercentUnhealthyServices;
        static Common::GlobalWString const Attribute_MaxPercentUnhealthyPartitionsPerService;
        static Common::GlobalWString const Attribute_MaxPercentUnhealthyReplicasPerPartition;
        static Common::GlobalWString const Attribute_IsEnabled;
        static Common::GlobalWString const Attribute_RelativeFolderPath;
        static Common::GlobalWString const Attribute_RelativePath;
        static Common::GlobalWString const Attribute_UploadIntervalInMinutes;
        static Common::GlobalWString const Attribute_DataDeletionAgeInDays;
        static Common::GlobalWString const Attribute_LevelFilter;
        static Common::GlobalWString const Attribute_ConnectionString;
        static Common::GlobalWString const Attribute_ConnectionStringIsEncrypted;
        static Common::GlobalWString const Attribute_ContainerName;
        static Common::GlobalWString const Attribute_Scope;
        static Common::GlobalWString const Attribute_PasswordSecret;
        static Common::GlobalWString const Attribute_PasswordSecretEncrypted;
        static Common::GlobalWString const Attribute_InstanceId;
        static Common::GlobalWString const Attribute_MSILocation;
        static Common::GlobalWString const Attribute_RemoveNodeState;
        static Common::GlobalWString const Attribute_TargetVersion;
        static Common::GlobalWString const Attribute_ClusterManifestLocation;
        static Common::GlobalWString const Attribute_InfrastructureManifestLocation;
        static Common::GlobalWString const Attribute_UpgradeEntryPointExe;
        static Common::GlobalWString const Attribute_UpgradeEntryPointExeParameters;
        static Common::GlobalWString const Attribute_UndoUpgradeEntryPointExe;
        static Common::GlobalWString const Attribute_UndoUpgradeEntryPointExeParameters;
        static Common::GlobalWString const Attribute_ResourceType;
        static Common::GlobalWString const Attribute_Email;
        static Common::GlobalWString const Attribute_UriScheme;
        static Common::GlobalWString const Attribute_PathSuffix;
        static Common::GlobalWString const Attribute_CodePackageLinkFolder;
        static Common::GlobalWString const Attribute_ConfigPackageLinkFolder;
        static Common::GlobalWString const Attribute_DataPackageLinkFolder;
        static Common::GlobalWString const Attribute_LockFile;
        static Common::GlobalWString const Attribute_WorkingFolder;
        static Common::GlobalWString const Attribute_DebugParametersFile;
        static Common::GlobalWString const Attribute_ContainerPort;
        static Common::GlobalWString const Attribute_MemoryInMB;
        static Common::GlobalWString const Attribute_MemorySwapInMB;
        static Common::GlobalWString const Attribute_MemoryReservationInMB;
        static Common::GlobalWString const Attribute_CpuShares;
        static Common::GlobalWString const Attribute_CpuPercent;
        static Common::GlobalWString const Attribute_MaximumIOps;
        static Common::GlobalWString const Attribute_MaximumIOBytesps;
        static Common::GlobalWString const Attribute_BlockIOWeight;
        static Common::GlobalWString const Attribute_Driver;
        static Common::GlobalWString const Attribute_AdditionalProperties;
        static Common::GlobalWString const Attribute_Source;
        static Common::GlobalWString const Attribute_Destination;
        static Common::GlobalWString const Attribute_IsReadOnly;
        static Common::GlobalWString const Attribute_IsolationMode;
        static Common::GlobalWString const Attribute_Hostname;
        static Common::GlobalWString const Attribute_CpuCores;
        static Common::GlobalWString const Attribute_NetworkType;
        static Common::GlobalWString const Attribute_IncludeDockerHealthStatusInSystemHealthReport;
        static Common::GlobalWString const Attribute_RestartContainerOnUnhealthyDockerHealthStatus;
        static Common::GlobalWString const Attribute_AutoRemove;
        static Common::GlobalWString const Attribute_RunInteractive;
        static Common::GlobalWString const Attribute_ContainersRetentionCount;
        static Common::GlobalWString const Attribute_Os;
    };
}

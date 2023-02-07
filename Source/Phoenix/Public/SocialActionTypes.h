#pragma once
#include "CoreMinimal.h"
#include "SocialActionTypes.generated.h"

UENUM(BlueprintType)
enum SocialActionTypes {
    SOCIAL_ACTION_ACCIO,
    SOCIAL_ACTION_ACCIOMAXIMA,
    SOCIAL_ACTION_AGUAMENTI,
    SOCIAL_ACTION_AGUAMENTIMAXIMA,
    SOCIAL_ACTION_ALOHOMORA,
    SOCIAL_ACTION_ANIMAGUSFORM,
    SOCIAL_ACTION_APOLOGIZE,
    SOCIAL_ACTION_APPARITION,
    SOCIAL_ACTION_ARRESTOMOMENTUM,
    SOCIAL_ACTION_ARRESTOMOMENTUMMAXIMA,
    SOCIAL_ACTION_ATTENDCLASSCLOWN,
    SOCIAL_ACTION_ATTENDCLASSPILFER,
    SOCIAL_ACTION_ATTENDCLASSSLEEP,
    SOCIAL_ACTION_ATTENDCLASSSTUDY,
    SOCIAL_ACTION_ATTENDCLASSTALK,
    SOCIAL_ACTION_ATTENDCLUBPARTICIPATE,
    SOCIAL_ACTION_ATTENDCLUBTALK,
    SOCIAL_ACTION_AVADAKEDAVRA,
    SOCIAL_ACTION_BATBOGEY,
    SOCIAL_ACTION_BORED,
    SOCIAL_ACTION_BROOD,
    SOCIAL_ACTION_BULLYING,
    SOCIAL_ACTION_BULLYINTERVENE,
    SOCIAL_ACTION_CAPTURING,
    SOCIAL_ACTION_CHEERING,
    SOCIAL_ACTION_COLLISION,
    SOCIAL_ACTION_COLOVARIA,
    SOCIAL_ACTION_COMPLIMENT,
    SOCIAL_ACTION_CONFRINGO,
    SOCIAL_ACTION_CONFRINGOMAXIMA,
    SOCIAL_ACTION_CONFUNDO,
    SOCIAL_ACTION_CONJURATION,
    SOCIAL_ACTION_CRIMEPERPIDENTIFIED,
    SOCIAL_ACTION_CRIMERESPONSEAPPROVE,
    SOCIAL_ACTION_CRIMERESPONSEBECKON,
    SOCIAL_ACTION_CRIMERESPONSECOMPLAIN,
    SOCIAL_ACTION_CRIMERESPONSECOWER,
    SOCIAL_ACTION_CRIMERESPONSEFLEE,
    SOCIAL_ACTION_CRIMERESPONSEINVESTIGATE,
    SOCIAL_ACTION_CRIMERESPONSELAUGH,
    SOCIAL_ACTION_CRIMERESPONSEOBSERVE,
    SOCIAL_ACTION_CRIMERESPONSEREPORT,
    SOCIAL_ACTION_CRIMERESPONSERETALIATE,
    SOCIAL_ACTION_CRIMERESPONSESCOLD,
    SOCIAL_ACTION_CRIMERESPONSESHOCK,
    SOCIAL_ACTION_CRIMESCENEDISCOVERED,
    SOCIAL_ACTION_DEBATE,
    SOCIAL_ACTION_DEPULSO,
    SOCIAL_ACTION_DEPULSOMAXIMA,
    SOCIAL_ACTION_DEPULSOMT,
    SOCIAL_ACTION_DESCENDO,
    SOCIAL_ACTION_DIFFINDO,
    SOCIAL_ACTION_DISILLUSIONMENT,
    SOCIAL_ACTION_DRINK,
    SOCIAL_ACTION_DRUNK,
    SOCIAL_ACTION_EAT,
    SOCIAL_ACTION_ENGORGIO,
    SOCIAL_ACTION_EPISKEY,
    SOCIAL_ACTION_EXPECTOPATRONUM,
    SOCIAL_ACTION_EXPECTOPATRONUMMAXIMA,
    SOCIAL_ACTION_EXPELLIARMUS,
    SOCIAL_ACTION_EXPULSO,
    SOCIAL_ACTION_EXPULSOMAXIMA,
    SOCIAL_ACTION_EXTORTION,
    SOCIAL_ACTION_EXTORTIONHIGH,
    SOCIAL_ACTION_FAVORREQUESTED,
    SOCIAL_ACTION_FIENDFYRE,
    SOCIAL_ACTION_FINISHERBLACKPARTICLEEXPLODE,
    SOCIAL_ACTION_FINISHERCRYSTALSHATTER,
    SOCIAL_ACTION_FINISHERDEEPFREEZE,
    SOCIAL_ACTION_FINISHERFIERYSEND,
    SOCIAL_ACTION_FINISHERFLASHSEND,
    SOCIAL_ACTION_FINISHERPETRIFICUSTOTALUS,
    SOCIAL_ACTION_FINISHERSCARABBURST,
    SOCIAL_ACTION_FINISHERSPIDERBURST,
    SOCIAL_ACTION_FINISHERSUPERSLAMS,
    SOCIAL_ACTION_FINITE,
    SOCIAL_ACTION_FLIPENDO,
    SOCIAL_ACTION_FRIENDLYCONVERSATION,
    SOCIAL_ACTION_GIVEGIFTGENERAL,
    SOCIAL_ACTION_GIVEGIFTROMANTIC,
    SOCIAL_ACTION_GLACIUS,
    SOCIAL_ACTION_GLACIUSMAXIMA,
    SOCIAL_ACTION_GOSSIP,
    SOCIAL_ACTION_GREET,
    SOCIAL_ACTION_HAIL,
    SOCIAL_ACTION_HERBOLOGYHERBHARVESTED,
    SOCIAL_ACTION_HERBOLOGYHERBPLANTED,
    SOCIAL_ACTION_HORSEPLAY,
    SOCIAL_ACTION_HOUSEARMORDESTROYED,
    SOCIAL_ACTION_HOUSEARMORREPAIRED,
    SOCIAL_ACTION_HOUSEPOINTSGAINED,
    SOCIAL_ACTION_HOUSEPOINTSLOST,
    SOCIAL_ACTION_IMPERIUS,
    SOCIAL_ACTION_INCARCEROUS,
    SOCIAL_ACTION_INCENDIO,
    SOCIAL_ACTION_INCENDIOMAXIMA,
    SOCIAL_ACTION_INSTANTSCALPING,
    SOCIAL_ACTION_INTIMIDATE,
    SOCIAL_ACTION_INTRUSIONHIGH,
    SOCIAL_ACTION_INTRUSIONINPROGRESSHIGH,
    SOCIAL_ACTION_INTRUSIONINPROGRESSLOW,
    SOCIAL_ACTION_INTRUSIONINPROGRESSMEDIUM,
    SOCIAL_ACTION_INTRUSIONLOW,
    SOCIAL_ACTION_INTRUSIONMEDIUM,
    SOCIAL_ACTION_INTRUSIONTRIVIAL,
    SOCIAL_ACTION_INVESTIGATE,
    SOCIAL_ACTION_LEVIOSO,
    SOCIAL_ACTION_LEVIOSOMAXIMA,
    SOCIAL_ACTION_LUMOS,
    SOCIAL_ACTION_LUMOSMAXIMA,
    SOCIAL_ACTION_MEALTIMECHAT,
    SOCIAL_ACTION_MEALTIMESOCIALIZE,
    SOCIAL_ACTION_MEALTIMESTASH,
    SOCIAL_ACTION_MISSIONACK,
    SOCIAL_ACTION_MISSIONGOSSIP,
    SOCIAL_ACTION_MOCK,
    SOCIAL_ACTION_NAP,
    SOCIAL_ACTION_OBLIVIATE,
    SOCIAL_ACTION_OBSERVE,
    SOCIAL_ACTION_OCCUPATIONMAJOR,
    SOCIAL_ACTION_OCCUPATIONMINOR,
    SOCIAL_ACTION_OCCUPATIONPRIMARY,
    SOCIAL_ACTION_OCCUPATIONSLACKING,
    SOCIAL_ACTION_OPPUGNO,
    SOCIAL_ACTION_OPPUGNOMT,
    SOCIAL_ACTION_PHYSICSTRIVIAL,
    SOCIAL_ACTION_PICKPOCKETHIGH,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSHIGH,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSLOW,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSMEDIUM,
    SOCIAL_ACTION_PICKPOCKETLOW,
    SOCIAL_ACTION_PICKPOCKETMEDIUM,
    SOCIAL_ACTION_PIERTOTUMLOCOMOTOR,
    SOCIAL_ACTION_PLAYERCHAT,
    SOCIAL_ACTION_PROTEGO,
    SOCIAL_ACTION_PROXYCHAT,
    SOCIAL_ACTION_REDUCIO,
    SOCIAL_ACTION_REPARO,
    SOCIAL_ACTION_REPAROMAXIMA,
    SOCIAL_ACTION_REVELIO,
    SOCIAL_ACTION_ROMANTICCONVERSATION,
    SOCIAL_ACTION_SINGLEBUTSOCIAL,
    SOCIAL_ACTION_SLEEP,
    SOCIAL_ACTION_SPELLRESPONSE,
    SOCIAL_ACTION_SPOTOTEA,
    SOCIAL_ACTION_STATIONSPECIFIC,
    SOCIAL_ACTION_STUDY,
    SOCIAL_ACTION_STUPEFY,
    SOCIAL_ACTION_SWEEPING,
    SOCIAL_ACTION_TABOOGAMEOVER,
    SOCIAL_ACTION_TABOOHIGH,
    SOCIAL_ACTION_TABOOMEDIUM,
    SOCIAL_ACTION_TARANTALLEGRA,
    SOCIAL_ACTION_THEFTHIGH,
    SOCIAL_ACTION_THEFTINPROGRESSHIGH,
    SOCIAL_ACTION_THEFTINPROGRESSLOW,
    SOCIAL_ACTION_THEFTINPROGRESSMEDIUM,
    SOCIAL_ACTION_THEFTLOW,
    SOCIAL_ACTION_THEFTMEDIUM,
    SOCIAL_ACTION_TRANSFORMATION,
    SOCIAL_ACTION_TRANSFORMATIONOVERLAND,
    SOCIAL_ACTION_TRIPJINX,
    SOCIAL_ACTION_UNAVAILABLE,
    SOCIAL_ACTION_UNIFIEDTRANSFORMATION,
    SOCIAL_ACTION_VANISHMENT,
    SOCIAL_ACTION_VIOLENCEGAMEOVER,
    SOCIAL_ACTION_VIOLENCEHIGH,
    SOCIAL_ACTION_VIOLENCELOW,
    SOCIAL_ACTION_VIOLENCEMEDIUM,
    SOCIAL_ACTION_VIOLENCETRIVIAL,
    SOCIAL_ACTION_WE_LOOSESNITCH,
    SOCIAL_ACTION_WE_RAINONME,
    SOCIAL_ACTION_WE_SPECIALDELIVERY,
    SOCIAL_ACTION_WE_SUPERSMASH,
    SOCIAL_ACTION_WINDOWSHOPPING,
    SOCIAL_ACTION_WINGARDIUM,
    SOCIAL_ACTION_WINGARDIUMMAXIMA,
    SOCIAL_ACTION_COUNT,
    SOCIAL_ACTION_MAX UMETA(Hidden),
};

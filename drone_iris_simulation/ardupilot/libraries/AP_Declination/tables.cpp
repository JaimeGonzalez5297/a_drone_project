// this is an auto-generated file from the IGRF tables. Do not edit
// To re-generate run generate/generate.py

#include "AP_Declination.h"

const float AP_Declination::SAMPLING_RES = 10;
const float AP_Declination::SAMPLING_MIN_LAT = -90;
const float AP_Declination::SAMPLING_MAX_LAT = 90;
const float AP_Declination::SAMPLING_MIN_LON = -180;
const float AP_Declination::SAMPLING_MAX_LON = 180;

const float AP_Declination::declination_table[LAT_TABLE_SIZE][LON_TABLE_SIZE] = {
    {149.10950f,139.10950f,129.10950f,119.10950f,109.10949f,99.10950f,89.10950f,79.10950f,69.10950f,59.10950f,49.10950f,39.10950f,29.10950f,19.10950f,9.10950f,-0.89050f,-10.89050f,-20.89050f,-30.89050f,-40.89050f,-50.89050f,-60.89050f,-70.89050f,-80.89050f,-90.89050f,-100.89050f,-110.89050f,-120.89050f,-130.89050f,-140.89050f,-150.89050f,-160.89050f,-170.89050f,179.10950f,169.10950f,159.10950f,149.10950f},
    {129.37759f,117.14583f,106.01898f,95.84726f,86.44522f,77.63150f,69.24826f,61.16874f,53.29825f,45.57105f,37.94414f,30.38880f,22.88112f,15.39339f,7.88854f,0.31945f,-7.36677f,-15.22089f,-23.28322f,-31.57827f,-40.11442f,-48.88906f,-57.89765f,-67.14429f,-76.65158f,-86.46832f,-96.67422f,-107.38079f,-118.72599f,-130.85732f,-143.89431f,-157.86353f,-172.61739f,172.21319f,157.16190f,142.76170f,129.37759f},
    {85.60184f,77.69003f,71.32207f,65.86993f,60.92414f,56.17033f,51.35320f,46.28164f,40.84704f,35.03587f,28.92623f,22.66416f,16.41848f,10.31921f,4.39763f,-1.44271f,-7.40082f,-13.70324f,-20.51470f,-27.87783f,-35.70713f,-43.83304f,-52.06997f,-60.27655f,-68.39086f,-76.44339f,-84.56374f,-93.00460f,-102.21930f,-113.07088f,-127.37057f,-149.05145f,176.63172f,138.21637f,112.07842f,96.22737f,85.60184f},
    {47.72047f,46.41844f,44.94283f,43.50977f,42.16271f,40.77290f,39.04552f,36.59993f,33.11430f,28.45556f,22.74662f,16.37046f,9.89648f,3.90131f,-1.27904f,-5.73319f,-9.95573f,-14.61164f,-20.21833f,-26.91079f,-34.40272f,-42.16094f,-49.65783f,-56.52405f,-62.55849f,-67.66009f,-71.72876f,-74.52850f,-75.43728f,-72.72706f,-60.57997f,-20.41341f,26.63644f,42.82781f,47.52694f,48.39676f,47.72047f},
    {31.02920f,31.23624f,30.96588f,30.54974f,30.22312f,30.09074f,29.97250f,29.32817f,27.43015f,23.68926f,17.94459f,10.65044f,2.87620f,-4.06486f,-9.27368f,-12.71750f,-15.14455f,-17.66990f,-21.38496f,-26.87077f,-33.73354f,-40.89381f,-47.34608f,-52.47467f,-55.91656f,-57.36320f,-56.37027f,-52.13926f,-43.55753f,-30.12705f,-13.67554f,1.91730f,13.93567f,22.07926f,27.11546f,29.86289f,31.02920f},
    {22.39580f,22.91483f,22.98471f,22.79294f,22.51132f,22.37364f,22.48467f,22.51169f,21.58462f,18.60470f,12.86231f,4.67251f,-4.38742f,-12.20529f,-17.49574f,-20.37578f,-21.69620f,-22.20533f,-22.93466f,-25.58202f,-30.65181f,-36.60256f,-41.68581f,-44.89480f,-45.67065f,-43.68591f,-38.75262f,-30.86937f,-20.99711f,-11.25673f,-2.98341f,3.98182f,9.94668f,14.86513f,18.60975f,21.08265f,22.39580f},
    {16.86268f,17.34487f,17.55107f,17.53468f,17.27224f,16.88812f,16.63481f,16.50963f,15.80216f,13.15648f,7.42999f,-1.11751f,-10.42072f,-17.95472f,-22.58300f,-24.81140f,-25.51932f,-24.64114f,-22.09731f,-20.12401f,-21.49578f,-25.56754f,-29.71013f,-31.93909f,-31.38680f,-28.14427f,-22.75379f,-15.84114f,-8.81817f,-3.40017f,0.41409f,3.84742f,7.42617f,10.85398f,13.75385f,15.78065f,16.86268f},
    {13.19097f,13.44856f,13.58422f,13.65261f,13.48939f,13.02568f,12.52149f,12.14860f,11.29753f,8.56495f,2.76096f,-5.61344f,-14.17225f,-20.58114f,-24.03412f,-24.98709f,-24.11858f,-21.26636f,-16.32028f,-11.21874f,-9.02165f,-10.74849f,-14.47798f,-17.30779f,-17.65042f,-15.69359f,-12.14311f,-7.48791f,-2.96526f,-0.12587f,1.36049f,3.09789f,5.60507f,8.31685f,10.73216f,12.41267f,13.19097f},
    {10.92623f,10.90181f,10.82333f,10.86460f,10.78695f,10.37670f,9.88910f,9.46007f,8.36291f,5.29505f,-0.57591f,-8.37062f,-15.75003f,-20.80957f,-22.79710f,-21.87616f,-18.84351f,-14.45358f,-9.42840f,-4.80202f,-1.83473f,-1.74130f,-4.26028f,-7.17479f,-8.52577f,-8.09283f,-6.32284f,-3.48771f,-0.62426f,0.78982f,1.09893f,2.05326f,4.13896f,6.57935f,8.80977f,10.35435f,10.92623f},
    {9.71011f,9.51881f,9.24068f,9.25106f,9.26720f,8.95743f,8.53646f,8.00522f,6.50726f,2.98362f,-2.85308f,-9.84907f,-15.97767f,-19.64088f,-20.07848f,-17.56993f,-13.32746f,-8.73278f,-4.74905f,-1.53742f,0.92858f,1.76616f,0.36916f,-1.99224f,-3.56114f,-3.89436f,-3.25158f,-1.74963f,-0.12369f,0.39195f,0.09209f,0.65986f,2.57335f,5.00216f,7.34943f,9.08114f,9.71011f},
    {9.00312f,9.03132f,8.80862f,8.92740f,9.13380f,8.96714f,8.45876f,7.49648f,5.31405f,1.20550f,-4.60853f,-10.79680f,-15.64160f,-17.86099f,-17.02957f,-13.81388f,-9.48335f,-5.27860f,-2.08821f,0.18491f,2.08754f,3.09405f,2.33958f,0.49969f,-0.94208f,-1.51458f,-1.49063f,-0.97753f,-0.41673f,-0.66423f,-1.43031f,-1.23789f,0.43821f,2.92085f,5.61318f,7.88479f,9.00312f},
    {8.03874f,8.87718f,9.23144f,9.74451f,10.27560f,10.29756f,9.57016f,7.89237f,4.74571f,-0.17093f,-6.17240f,-11.69433f,-15.25467f,-16.11759f,-14.45574f,-11.15430f,-7.17811f,-3.38526f,-0.55632f,1.30997f,2.82221f,3.77763f,3.40183f,2.00714f,0.77788f,0.16424f,-0.15468f,-0.39946f,-0.85273f,-1.96753f,-3.33820f,-3.67623f,-2.39633f,0.05772f,3.10388f,6.04655f,8.03874f},
    {6.42021f,8.49313f,9.96485f,11.21264f,12.15378f,12.34411f,11.39654f,9.00192f,4.80210f,-1.14083f,-7.63429f,-12.77860f,-15.31639f,-15.15258f,-12.98558f,-9.72317f,-6.02652f,-2.46224f,0.32036f,2.16718f,3.52576f,4.45316f,4.47022f,3.64413f,2.71916f,2.05267f,1.37415f,0.37187f,-1.18524f,-3.37771f,-5.55055f,-6.50029f,-5.64204f,-3.28034f,-0.00971f,3.47278f,6.42021f},
    {4.55870f,7.84457f,10.59505f,12.78315f,14.21311f,14.53879f,13.38981f,10.37263f,5.13228f,-2.00167f,-9.27410f,-14.41195f,-16.39580f,-15.63899f,-13.13217f,-9.75841f,-6.05603f,-2.45211f,0.55836f,2.75052f,4.36042f,5.58048f,6.24404f,6.24213f,5.76940f,4.95204f,3.62521f,1.54168f,-1.40447f,-4.90584f,-7.98277f,-9.46456f,-8.87577f,-6.53558f,-3.08458f,0.80580f,4.55870f},
    {3.13967f,7.31097f,11.07216f,14.15725f,16.20221f,16.79070f,15.47250f,11.72257f,5.14656f,-3.57391f,-11.94254f,-17.34882f,-19.11810f,-18.05435f,-15.26042f,-11.58179f,-7.54393f,-3.53438f,0.07849f,3.08157f,5.54519f,7.63184f,9.31427f,10.36791f,10.53101f,9.56965f,7.27456f,3.54700f,-1.35789f,-6.53724f,-10.58593f,-12.40763f,-11.80293f,-9.26734f,-5.52522f,-1.23338f,3.13967f},
    {2.40982f,7.18541f,11.61646f,15.39834f,18.09395f,19.11444f,17.67695f,12.80844f,3.91551f,-7.49296f,-17.41503f,-23.01926f,-24.41774f,-22.89374f,-19.60750f,-15.34185f,-10.59502f,-5.72094f,-1.00157f,3.37937f,7.37061f,10.97982f,14.11553f,16.47981f,17.57833f,16.80075f,13.55567f,7.60935f,-0.25054f,-7.92815f,-13.21489f,-15.22877f,-14.33921f,-11.39247f,-7.22465f,-2.48217f,2.40982f},
    {1.84909f,7.14349f,12.09954f,16.39700f,19.54576f,20.73345f,18.58921f,11.09809f,-2.76476f,-18.58691f,-29.30539f,-33.52891f,-33.25409f,-30.30365f,-25.79412f,-20.37504f,-14.44263f,-8.26365f,-2.03561f,4.09039f,9.99389f,15.55055f,20.57404f,24.74657f,27.54152f,28.12085f,25.24078f,17.56424f,5.48335f,-6.76322f,-14.61951f,-17.38523f,-16.44524f,-13.21307f,-8.68808f,-3.52579f,1.84909f},
    {-0.07018f,5.11056f,9.81033f,13.43064f,14.95811f,12.44881f,2.42652f,-17.21607f,-37.22275f,-47.59912f,-50.02338f,-48.04885f,-43.68750f,-37.95581f,-31.39385f,-24.31250f,-16.90710f,-9.31264f,-1.63265f,6.04381f,13.62973f,21.02738f,28.11104f,34.69910f,40.50309f,45.02417f,47.32932f,45.58173f,36.48238f,17.86736f,-1.80184f,-12.43534f,-15.24263f,-13.75101f,-10.05982f,-5.28238f,-0.07018f},
    {-177.79784f,-167.79784f,-157.79784f,-147.79784f,-137.79784f,-127.79784f,-117.79784f,-107.79784f,-97.79784f,-87.79784f,-77.79784f,-67.79784f,-57.79784f,-47.79784f,-37.79784f,-27.79784f,-17.79784f,-7.79784f,2.20217f,12.20217f,22.20217f,32.20217f,42.20217f,52.20217f,62.20217f,72.20217f,82.20217f,92.20217f,102.20217f,112.20217f,122.20217f,132.20217f,142.20217f,152.20217f,162.20217f,172.20217f,-177.79784f}
};

const float AP_Declination::inclination_table[LAT_TABLE_SIZE][LON_TABLE_SIZE] = {
    {-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f,-72.08447f},
    {-78.33243f,-77.56645f,-76.64486f,-75.60941f,-74.49599f,-73.33711f,-72.16456f,-71.01082f,-69.90877f,-68.88978f,-67.98065f,-67.20063f,-66.55969f,-66.05909f,-65.69426f,-65.45930f,-65.35147f,-65.37404f,-65.53651f,-65.85220f,-66.33408f,-66.99021f,-67.82010f,-68.81276f,-69.94649f,-71.18994f,-72.50361f,-73.84119f,-75.15044f,-76.37388f,-77.45008f,-78.31699f,-78.91913f,-79.21830f,-79.20379f,-78.89480f,-78.33243f},
    {-80.91847f,-79.09801f,-77.26826f,-75.41050f,-73.49957f,-71.51974f,-69.48020f,-67.42760f,-65.44927f,-63.66181f,-62.18407f,-61.10090f,-60.43119f,-60.11709f,-60.04466f,-60.08935f,-60.16521f,-60.25535f,-60.41391f,-60.74312f,-61.35672f,-62.34264f,-63.73840f,-65.52698f,-67.65072f,-70.03207f,-72.58967f,-75.24472f,-77.91857f,-80.52353f,-82.93966f,-84.94483f,-86.05606f,-85.75384f,-84.42566f,-82.72116f,-80.91847f},
    {-77.51837f,-75.51694f,-73.59315f,-71.68670f,-69.71302f,-67.57376f,-65.19328f,-62.57944f,-59.87571f,-57.36704f,-55.41993f,-54.35624f,-54.29717f,-55.07005f,-56.26617f,-57.42621f,-58.22580f,-58.56311f,-58.55509f,-58.48876f,-58.73003f,-59.58712f,-61.19398f,-63.49338f,-66.31349f,-69.46462f,-72.79529f,-76.19407f,-79.56126f,-82.77630f,-85.61580f,-87.26733f,-86.31815f,-84.15731f,-81.85873f,-79.63120f,-77.51837f},
    {-71.58980f,-69.64769f,-67.77321f,-65.94443f,-64.10554f,-62.13602f,-59.85758f,-57.13808f,-54.05141f,-50.99340f,-48.66453f,-47.83440f,-48.89447f,-51.51382f,-54.80435f,-57.85064f,-60.06631f,-61.18986f,-61.20437f,-60.42942f,-59.58264f,-59.49073f,-60.61581f,-62.88772f,-65.91135f,-69.25190f,-72.58760f,-75.67681f,-78.24048f,-79.94645f,-80.57004f,-80.16984f,-79.02581f,-77.42625f,-75.56790f,-73.58591f,-71.58980f},
    {-64.35997f,-62.39436f,-60.44044f,-58.48692f,-56.55523f,-54.62878f,-52.55624f,-50.07572f,-47.03679f,-43.74840f,-41.19888f,-40.75016f,-43.15983f,-47.79606f,-53.17503f,-58.10488f,-62.07251f,-64.81023f,-65.90745f,-65.16861f,-63.23594f,-61.51933f,-61.25674f,-62.70064f,-65.25795f,-68.11437f,-70.67345f,-72.55166f,-73.47174f,-73.47848f,-72.95756f,-72.18292f,-71.16028f,-69.83589f,-68.20337f,-66.33091f,-64.35997f},
    {-54.94450f,-52.83610f,-50.71907f,-48.52548f,-46.29540f,-44.14811f,-42.08032f,-39.77454f,-36.80280f,-33.30065f,-30.58530f,-30.73124f,-34.77290f,-41.50404f,-48.77340f,-55.23978f,-60.63675f,-64.93033f,-67.56104f,-67.82610f,-65.84530f,-62.87774f,-60.76994f,-60.59320f,-61.93831f,-63.73453f,-65.20081f,-65.88752f,-65.54695f,-64.51690f,-63.50867f,-62.74044f,-61.89461f,-60.69909f,-59.07143f,-57.07765f,-54.94450f},
    {-42.10646f,-39.67640f,-37.35701f,-34.97293f,-32.46788f,-30.02667f,-27.76992f,-25.30303f,-22.01486f,-18.09122f,-15.32823f,-16.39044f,-22.30870f,-31.32094f,-40.74071f,-48.83600f,-55.18344f,-59.91449f,-62.78717f,-63.30498f,-61.42903f,-57.98330f,-54.69009f,-53.10628f,-53.23404f,-54.07531f,-54.84677f,-54.97074f,-54.01281f,-52.44135f,-51.30869f,-50.77990f,-50.14138f,-48.93456f,-47.08149f,-44.68014f,-42.10646f},
    {-25.12461f,-22.20972f,-19.71770f,-17.30812f,-14.73074f,-12.18096f,-9.79096f,-7.01347f,-3.30221f,0.76014f,3.06841f,1.05911f,-6.08614f,-16.75791f,-28.16035f,-37.77466f,-44.50466f,-48.52854f,-50.32132f,-50.14678f,-47.98684f,-44.21133f,-40.39026f,-38.23866f,-37.87010f,-38.34407f,-38.95664f,-39.04699f,-37.96969f,-36.26974f,-35.35719f,-35.32784f,-34.98679f,-33.69969f,-31.46052f,-28.41042f,-25.12461f},
    {-4.97565f,-1.60199f,0.92214f,3.11849f,5.46677f,7.81249f,10.07397f,12.84091f,16.38100f,19.76510f,21.12151f,18.61808f,11.61848f,1.03273f,-10.71878f,-20.60587f,-26.95396f,-29.87498f,-30.40244f,-29.49437f,-27.12952f,-23.19291f,-19.13605f,-16.84996f,-16.43635f,-16.86796f,-17.51065f,-17.78722f,-16.98601f,-15.63402f,-15.29474f,-15.99460f,-16.17398f,-15.02255f,-12.56796f,-8.96345f,-4.97565f},
    {14.91447f,18.35017f,20.72172f,22.57409f,24.52718f,26.56390f,28.61333f,31.02478f,33.78706f,36.01013f,36.36989f,33.79530f,27.90158f,19.21562f,9.54519f,1.38248f,-3.71763f,-5.61325f,-5.28417f,-3.97847f,-1.76155f,1.76478f,5.44818f,7.52401f,7.87847f,7.51982f,7.00436f,6.66556f,7.01607f,7.64759f,7.26628f,5.87086f,4.95018f,5.43404f,7.43409f,10.86385f,14.91447f},
    {31.20265f,34.13364f,36.24286f,37.87203f,39.58418f,41.50443f,43.52947f,45.65845f,47.68007f,48.91359f,48.52705f,46.02412f,41.42395f,35.29504f,28.85019f,23.50541f,20.17823f,19.13590f,19.80674f,21.15030f,22.94717f,25.52415f,28.20453f,29.75720f,30.04189f,29.82318f,29.56477f,29.39315f,29.46905f,29.45564f,28.53745f,26.73967f,25.15400f,24.67305f,25.61444f,27.99981f,31.20265f},
    {43.45897f,45.53118f,47.31626f,48.90746f,50.63263f,52.61803f,54.74225f,56.79950f,58.45770f,59.16957f,58.40919f,56.07765f,52.56584f,48.52949f,44.70395f,41.69430f,39.88037f,39.44508f,40.12934f,41.29382f,42.64758f,44.29218f,45.93985f,46.96938f,47.25944f,47.23840f,47.23429f,47.28737f,47.30538f,46.94314f,45.73923f,43.78378f,41.82093f,40.58525f,40.46579f,41.54349f,43.45897f},
    {53.18759f,54.43224f,55.88059f,57.49427f,59.34040f,61.41406f,63.57613f,65.58932f,67.09997f,67.62703f,66.81035f,64.77326f,62.07457f,59.34036f,57.01844f,55.33747f,54.40642f,54.27684f,54.81467f,55.68344f,56.63785f,57.64137f,58.61275f,59.35237f,59.79549f,60.08844f,60.36788f,60.60803f,60.61967f,60.08419f,58.75938f,56.80187f,54.74411f,53.13609f,52.31629f,52.38221f,53.18759f},
    {62.00682f,62.70613f,63.84875f,65.37429f,67.21435f,69.25270f,71.31641f,73.17326f,74.49560f,74.88083f,74.10396f,72.39157f,70.27835f,68.26326f,66.64304f,65.52888f,64.93677f,64.84030f,65.14402f,65.67923f,66.29619f,66.93920f,67.60553f,68.28409f,68.96109f,69.62909f,70.24417f,70.67488f,70.69663f,70.07359f,68.73701f,66.90517f,64.98300f,63.35731f,62.27637f,61.83476f,62.00682f},
    {70.71443f,71.15184f,72.02039f,73.27261f,74.82799f,76.56362f,78.31147f,79.84421f,80.85027f,81.00173f,80.21459f,78.77568f,77.10397f,75.52742f,74.23457f,73.30289f,72.74118f,72.51798f,72.57149f,72.82152f,73.19914f,73.67611f,74.26606f,74.99681f,75.87341f,76.84434f,77.77369f,78.43201f,78.54711f,77.95236f,76.72716f,75.15436f,73.56000f,72.20185f,71.23761f,70.73764f,70.71443f},
    {79.00682f,79.29184f,79.87277f,80.71498f,81.76476f,82.94241f,84.12827f,85.13086f,85.65991f,85.46559f,84.62947f,83.45809f,82.20769f,81.03569f,80.03242f,79.24434f,78.68745f,78.35646f,78.23285f,78.29380f,78.52195f,78.91276f,79.47430f,80.21709f,81.13521f,82.18169f,83.23875f,84.08767f,84.43289f,84.09671f,83.21590f,82.09358f,80.98565f,80.05465f,79.39115f,79.03778f,79.00682f},
    {86.14235f,86.25121f,86.50061f,86.87153f,87.33295f,87.83175f,88.26493f,88.44295f,88.20870f,87.65877f,86.96733f,86.23857f,85.52963f,84.87675f,84.30531f,83.83351f,83.47382f,83.23411f,83.11886f,83.13031f,83.26944f,83.53626f,83.92911f,84.44289f,85.06632f,85.77827f,86.54222f,87.29519f,87.92224f,88.23116f,88.09287f,87.66150f,87.15950f,86.71170f,86.37734f,86.18408f,86.14235f},
    {88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f,88.07502f}
};

const float AP_Declination::intensity_table[LAT_TABLE_SIZE][LON_TABLE_SIZE] = {
    {0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f,0.54677f},
    {0.60733f,0.60103f,0.59321f,0.58408f,0.57385f,0.56274f,0.55099f,0.53886f,0.52664f,0.51464f,0.50318f,0.49258f,0.48311f,0.47506f,0.46864f,0.46409f,0.46158f,0.46131f,0.46341f,0.46797f,0.47499f,0.48434f,0.49579f,0.50895f,0.52332f,0.53833f,0.55334f,0.56771f,0.58086f,0.59227f,0.60156f,0.60848f,0.61292f,0.61488f,0.61448f,0.61189f,0.60733f},
    {0.63154f,0.61845f,0.60363f,0.58729f,0.56950f,0.55031f,0.52986f,0.50843f,0.48660f,0.46508f,0.44473f,0.42628f,0.41025f,0.39690f,0.38632f,0.37857f,0.37385f,0.37260f,0.37540f,0.38291f,0.39557f,0.41347f,0.43621f,0.46292f,0.49236f,0.52306f,0.55344f,0.58192f,0.60704f,0.62760f,0.64283f,0.65244f,0.65659f,0.65582f,0.65087f,0.64254f,0.63154f},
    {0.62000f,0.60125f,0.58151f,0.56085f,0.53899f,0.51544f,0.48977f,0.46196f,0.43279f,0.40379f,0.37690f,0.35385f,0.33554f,0.32180f,0.31173f,0.30436f,0.29937f,0.29738f,0.29983f,0.30853f,0.32501f,0.34983f,0.38230f,0.42070f,0.46273f,0.50598f,0.54808f,0.58665f,0.61944f,0.64465f,0.66128f,0.66932f,0.66957f,0.66335f,0.65211f,0.63725f,0.62000f},
    {0.58540f,0.56274f,0.53995f,0.51720f,0.49410f,0.46971f,0.44278f,0.41255f,0.37961f,0.34621f,0.31570f,0.29135f,0.27491f,0.26562f,0.26073f,0.25737f,0.25418f,0.25173f,0.25221f,0.25901f,0.27564f,0.30394f,0.34296f,0.38959f,0.43988f,0.49027f,0.53788f,0.58008f,0.61437f,0.63888f,0.65302f,0.65739f,0.65335f,0.64259f,0.62670f,0.60715f,0.58540f},
    {0.53990f,0.51548f,0.49130f,0.46766f,0.44447f,0.42102f,0.39585f,0.36752f,0.33593f,0.30307f,0.27292f,0.25027f,0.23814f,0.23543f,0.23760f,0.24017f,0.24116f,0.24059f,0.23977f,0.24231f,0.25416f,0.28019f,0.32067f,0.37126f,0.42556f,0.47801f,0.52510f,0.56440f,0.59381f,0.61260f,0.62170f,0.62236f,0.61571f,0.60295f,0.58524f,0.56369f,0.53990f},
    {0.48818f,0.46438f,0.44084f,0.41767f,0.39521f,0.37350f,0.35178f,0.32863f,0.30295f,0.27543f,0.24958f,0.23085f,0.22313f,0.22534f,0.23244f,0.24016f,0.24725f,0.25311f,0.25619f,0.25738f,0.26278f,0.28057f,0.31495f,0.36280f,0.41574f,0.46566f,0.50804f,0.54032f,0.56070f,0.57052f,0.57345f,0.57128f,0.56367f,0.55075f,0.53312f,0.51166f,0.48818f},
    {0.43218f,0.41124f,0.39069f,0.37048f,0.35104f,0.33291f,0.31620f,0.29993f,0.28232f,0.26276f,0.24367f,0.22976f,0.22479f,0.22857f,0.23760f,0.24889f,0.26192f,0.27556f,0.28577f,0.28998f,0.29174f,0.29954f,0.32156f,0.35867f,0.40314f,0.44569f,0.48090f,0.50518f,0.51615f,0.51692f,0.51415f,0.50994f,0.50209f,0.48968f,0.47316f,0.45335f,0.43218f},
    {0.37898f,0.36321f,0.34812f,0.33368f,0.32029f,0.30839f,0.29830f,0.28945f,0.28010f,0.26891f,0.25668f,0.24625f,0.24088f,0.24246f,0.25067f,0.26352f,0.27927f,0.29594f,0.30956f,0.31664f,0.31798f,0.31969f,0.33051f,0.35422f,0.38581f,0.41752f,0.44408f,0.46107f,0.46532f,0.46038f,0.45387f,0.44781f,0.43921f,0.42706f,0.41219f,0.39562f,0.37898f},
    {0.34141f,0.33249f,0.32432f,0.31714f,0.31161f,0.30779f,0.30545f,0.30409f,0.30213f,0.29754f,0.28963f,0.27981f,0.27109f,0.26711f,0.27059f,0.28075f,0.29432f,0.30838f,0.32039f,0.32820f,0.33136f,0.33312f,0.33973f,0.35435f,0.37434f,0.39514f,0.41304f,0.42408f,0.42536f,0.41914f,0.41071f,0.40169f,0.39062f,0.37761f,0.36424f,0.35187f,0.34141f},
    {0.32867f,0.32594f,0.32420f,0.32395f,0.32630f,0.33102f,0.33698f,0.34292f,0.34678f,0.34593f,0.33903f,0.32732f,0.31415f,0.30395f,0.30057f,0.30442f,0.31263f,0.32253f,0.33245f,0.34086f,0.34708f,0.35294f,0.36127f,0.37252f,0.38535f,0.39852f,0.41027f,0.41774f,0.41871f,0.41327f,0.40286f,0.38883f,0.37279f,0.35689f,0.34336f,0.33390f,0.32867f},
    {0.34041f,0.34097f,0.34394f,0.34953f,0.35870f,0.37101f,0.38453f,0.39684f,0.40514f,0.40637f,0.39894f,0.38449f,0.36738f,0.35274f,0.34431f,0.34264f,0.34599f,0.35295f,0.36228f,0.37184f,0.38062f,0.38995f,0.40068f,0.41156f,0.42185f,0.43217f,0.44201f,0.44914f,0.45121f,0.44627f,0.43315f,0.41330f,0.39087f,0.37008f,0.35387f,0.34401f,0.34041f},
    {0.37313f,0.37420f,0.38001f,0.39014f,0.40446f,0.42181f,0.43988f,0.45594f,0.46693f,0.46961f,0.46214f,0.44621f,0.42680f,0.40959f,0.39817f,0.39301f,0.39304f,0.39763f,0.40583f,0.41537f,0.42477f,0.43480f,0.44612f,0.45788f,0.46954f,0.48141f,0.49294f,0.50198f,0.50563f,0.50085f,0.48580f,0.46223f,0.43524f,0.41014f,0.39049f,0.37812f,0.37313f},
    {0.42356f,0.42408f,0.43096f,0.44342f,0.46009f,0.47887f,0.49731f,0.51304f,0.52358f,0.52620f,0.51923f,0.50394f,0.48467f,0.46656f,0.45306f,0.44501f,0.44198f,0.44352f,0.44889f,0.45639f,0.46470f,0.47409f,0.48543f,0.49886f,0.51385f,0.52947f,0.54409f,0.55526f,0.56003f,0.55559f,0.54075f,0.51743f,0.49032f,0.46455f,0.44383f,0.43002f,0.42356f},
    {0.48455f,0.48475f,0.49083f,0.50202f,0.51666f,0.53249f,0.54719f,0.55888f,0.56585f,0.56650f,0.55991f,0.54692f,0.53031f,0.51359f,0.49951f,0.48937f,0.48348f,0.48174f,0.48371f,0.48850f,0.49531f,0.50420f,0.51581f,0.53051f,0.54771f,0.56575f,0.58223f,0.59442f,0.59970f,0.59626f,0.58388f,0.56455f,0.54198f,0.52029f,0.50258f,0.49049f,0.48455f},
    {0.54041f,0.54034f,0.54396f,0.55064f,0.55927f,0.56837f,0.57642f,0.58216f,0.58460f,0.58302f,0.57718f,0.56756f,0.55545f,0.54258f,0.53062f,0.52078f,0.51381f,0.51011f,0.50972f,0.51240f,0.51793f,0.52626f,0.53755f,0.55170f,0.56796f,0.58472f,0.59979f,0.61087f,0.61607f,0.61448f,0.60648f,0.59374f,0.57883f,0.56443f,0.55261f,0.54449f,0.54041f},
    {0.57307f,0.57207f,0.57258f,0.57422f,0.57649f,0.57880f,0.58055f,0.58121f,0.58037f,0.57778f,0.57340f,0.56742f,0.56031f,0.55268f,0.54526f,0.53876f,0.53378f,0.53081f,0.53014f,0.53192f,0.53617f,0.54284f,0.55170f,0.56233f,0.57398f,0.58557f,0.59583f,0.60355f,0.60784f,0.60838f,0.60548f,0.60000f,0.59319f,0.58628f,0.58027f,0.57579f,0.57307f},
    {0.57801f,0.57662f,0.57545f,0.57444f,0.57349f,0.57249f,0.57133f,0.56991f,0.56816f,0.56605f,0.56360f,0.56089f,0.55803f,0.55520f,0.55261f,0.55047f,0.54900f,0.54836f,0.54871f,0.55012f,0.55257f,0.55599f,0.56021f,0.56498f,0.56997f,0.57483f,0.57918f,0.58272f,0.58521f,0.58659f,0.58688f,0.58625f,0.58495f,0.58326f,0.58141f,0.57962f,0.57801f},
    {0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f,0.56612f}
};

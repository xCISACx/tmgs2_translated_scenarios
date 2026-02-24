section "h8d_m3_000"{
    int var0;
    int var1;
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetSysParam(0) != 3){
        if (Parameter_GetSysParam(0) == 1){
            var0 = 25;
            var1 = 50;
            }
        else {
            var0 = 60;
            var1 = 120;
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.");
        if (Parameter_GetBkParam(8, 52) <= var0){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are unfit for a Student Council\njob, the way you are now.\nRevise your way of thinking.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Somehow, I did not feel your\nseriousness in tackling issues.\nExperience is important.");
                }
            else {
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt seems like you were sluggish this\nweek.\nI thought that you would have been\nable to do more.");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > var0) && (Parameter_GetBkParam(8, 52) <= var1)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nYou also learned things too, right?");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nIt seems like you learned something\nas well.\nIt would be nice if we could make\nuse of this.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nIt seems like you also gathered\nknowledge.\nIt should surely be of use.");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > var1){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a good camp.\nIt may have been because of your\nhard work.\nI look forward to the next club\nactivity.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a good camp.\nYou were also trying hard.\nThis experience will surely become\nuseful.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Honestly, I never imagined you to be\nworking that hard.\nMaybe you have leader like\nqualities?");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        }
    else if (0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.");
        if (Parameter_GetBkParam(8, 52) <= 60){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You are unfit for a Student Council\njob, the way you are now.\nRevise your way of thinking.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Somehow, I did not feel your\nseriousness in tackling issues.\nExperience is important.");
                }
            else {
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt seems like you were sluggish this\nweek.\nI thought that you would have been\nable to do more.");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > 60) && (Parameter_GetBkParam(8, 52) <= 120)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nYou also learned things too, right?");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nIt seems like you learned something\nas well.\nIt would be nice if we could make\nuse of this.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am glad that I came to camp.\nIt seems like you also gathered\nknowledge.\nIt should surely be of use.");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > 120){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a good camp.\nIt may have been because of your\nhard work.\nI look forward to the next club\nactivity.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a good camp.\nYou were also trying hard.\nThis experience will surely become\nuseful.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Honestly, I never imagined you to be\nworking that hard.\nMaybe you have leader like\nqualities?");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of camp.");
        if (Parameter_GetBkParam(8, 52) <= 90){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You didn't seem enthusiastic.\nHave some more self awareness, as a\nhigh school senior.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "As high school seniors, we should\nhave responsibilities.\nReflect on the attitude you had\nduring camp.");
                }
            else {
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What happened during camp?\nI think that the juniors would\nfollow your example if you acted\nmore like yourself.");
                }
            }
        else if ((Parameter_GetBkParam(8, 52) > 90) && (Parameter_GetBkParam(8, 52) <= 180)){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The last camp ended without any\nproblems.\nAs a high school senior, weren't you\nalso setting a good example?");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The last camp ended without any\nproblems.\nYou occasionally acted like a proper\nhigh school senior.");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The last camp ended without any\nproblems.\nIt's because you occasionally helped\nme.\nYou've worked hard.");
                }
            }
        else if (Parameter_GetBkParam(8, 52) > 180){
            if (Parameter_GetCh1Param(3, 130) <= 2){
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "As a high school senior, I am glad\nthat the camp could end on a good\nnote.\nIt seems like the juniors adore you,\ntoo.");
                }
            else if (Parameter_GetCh1Param(3, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was the ideal camp.\nYou also unified the juniors.\nYou've worked hard!");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 3, (#1));
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("H7D03000_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The \"Hellish Leader's Camp\" has\nnever been so relaxing.\nIt's the first time in these three\nyears.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H7D03000_C01800", 3, "H7D03000_C01801");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is all thanks to you,\n｛主人公｝....\nThank you, really.");
                }
            }
        }
    Character_Chara_GS2(3, "NON");
    System_Call_GS2("H8D", "G2", 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    Parameter_AddCh1Param(3, 60, 5);
    Parameter_AddCh1Param(3, 62, #3);
    }

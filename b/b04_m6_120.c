section "b04_m6_120"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 32);
        }
    else {
        Date_GetDateOption(1, 32);
        }
    if (Date_GetDateOption(1, 32) == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406010_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This seems to suit Senpai.");
            }
        else {
            Voice_PlayVoice("B0406010_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Doesn't this suit you?");
            }
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? I'm very happy.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, you really do.\nIt suits you perfectly!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 4);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "As I thought.\nI'm not worried about it.\nPlease choose carefully.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 4);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I thought it was nice though...\nWill you try it next time?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406010_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so..\nI thought it was quite nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406010_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "*Scoffs*. Fine then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406010_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "How about this?");
            }
        else {
            Voice_PlayVoice("B0406010_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, how about this?");
            }
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406010_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I'm sorry.\nIt was supposed to be a joke.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406010_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Just a minute! It's a joke.\nAre you taking it seriously?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It's a joke.\nThere are more that would suit\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's a joke.\nYou don't need to be so puzzled.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sorry, it was a little joke.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406010_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Crap.\nAs expected, you didn't fall for it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

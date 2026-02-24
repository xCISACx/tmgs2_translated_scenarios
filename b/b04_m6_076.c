section "b04_m6_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 3, 2);
            Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406076_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's Winter... The air is cold.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 9);
            Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406076_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ugh～, it's cold!");
            }
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406076_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406076_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "They don't look lonely.\nDon't they look cold?\nLet's hurry up and go to somewhere\nwarm!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's okay, from time to time.\nBut doing it all the time is cold\nand harsh.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, sometimes.\nBut as expected, I prefer somewhere\nwarm...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I was also thinking about wanting to\nhurry up and warm up.\nIt's about time we went somewhere\nelse.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nLet's go somewhere warm and drink\nsomething warm!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406076_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you like Winter, Senpai?");
            }
        else {
            Voice_PlayVoice("B0406076_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai. Do you like Winter?");
            }
        Message_MsgSel("I dislike extreme hot and colds.", "I hate it, since it snows.", "I like it, because stewed foods are yum.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "As expected, seasons that are easy\nto pass the time in are the best.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I get what you mean.\nSeasons that are easy to pass the\ntime in are the best.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406076_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, is that so?\nI dislike the cold but I like snow.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406076_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, really?\nIsn't snow fine, since it's pretty?\nI like it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I understand!\nBecause it's cold, it's delicious.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hotpot is nice. I love it!\nI'm okay with having hotpot every\nday when it's cold.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406076_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Haaah～...\nMy hands are numb from the cold.");
            }
        else {
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0406076_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Haaah, it's cold!\nMy hands are freezing.");
            }
        Message_MsgSel("My body feels tense when it's cold.", "Its tough, my skin is getting dry.", "Give me your hand. I'll warm it up▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406076_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It seems like we'll freeze before\nthat happens.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406076_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'd be frozen solid before that\nhappens.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's also easier to cut your lip.\nThat hurts, so I hate it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406076_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's also easier to cut your lip.\nCan't Spring just come already?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Voice_PlayVoice("B0406076_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh... I will decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Voice_PlayVoice("B0406076_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It's cold. You're cold, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406076_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh...! I'm fine without t-that!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406076_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What do you mean why?\nIt's e-embarrassing!");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406076_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Ah, right.\nDo you perhaps have a pocket warmer\nor something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. So you don't have to refuse...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0406076_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm f-fine!");
                Voice_PlayVoice("B0406076_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYour hands will get cold again if\nyou hold my cold hands....\nSo it's fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Haha, ｛Amachi＊＊｝.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

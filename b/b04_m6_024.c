section "b04_m6_024"{
    int var0 = Date_GetDateOption(2, 3);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_BlinkStart(6, 3, (#1));
            Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406024_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It takes quite a long time to go\naround.\nSomehow, it feels like I've gained\nsomething.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406024_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "We've arrived!\nThat one lap around was really long.");
            }
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the seashore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 4);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406024_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI was so excited, I couldn't calm\ndown.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406024_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nDidn't you get excited when you\nlooked at the ocean?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes! The ship also went fast.\nIt was the best!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nThe feeling of cutting through the\nwind was awesome!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I had thought so at first.\nBut it wouldn't bother you if you\ngot used to it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A little.\nWell, it wouldn't matter if you had\ngotten used to it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406024_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's amazing that just this amount\nof strength of the wind can move\nsuch a large ship like this.");
            }
        else {
            Voice_PlayVoice("B0406024_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Does this thing only move with the\nwind?\nIf it did, that'd be awesome.");
            }
        Message_MsgSel("It's Mother Nature's miracle.", "It's nice when it's quiet.", "But it'd be faster if they used the engine.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406024_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A missile...?\nIsn't that kind of a terrible thing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406024_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A missile...?\nWhy would that ever happen?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it is ideal for sightseeing.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nIt's like we're sliding on top of\nthe water.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I thought so, too!\nI thought that it would feel better\nif it went faster.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nBut when it's fast, it seems like\nyou'd go flying if you weren't\npaying attention.\nEspecially you, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406024_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What did you think when riding this\nboat?");
            }
        else {
            Voice_PlayVoice("B0406024_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, how was the boat ride?");
            }
        Message_MsgSel("It'd be nice if we could eat here.", "I want to go overseas with my lover on this.", "I wanted it to be more steady...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I thought so, too!\nIt would be the best if there were\ndelicious meals served onboard.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I thought that, too!\nIt'd be nice to gaze out at the\nocean while eating a yummy meal.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406024_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIt seems like that would cost quite\na lot of money.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406024_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai.\nDo you know how long it'd take to go\noverseas on this boat?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406024_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... What!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-What?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406024_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh... u-umm...\nSaying something like that to me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?\nWhy are you flustered like that,\n｛Amachi＊＊｝?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406024_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What do you mean \"what's wrong\"...\nDo you know what you just said...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That I'd want to go traveling with\nthis boat...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406024_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I thought so... Hey, Senpai...\nPlease stop saying such\nirresponsible things...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What!? Irresponsible?\nWhat did I say?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406024_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm not going to forgive you if you\nsay such things, again...\nPlease be prepared for it... Hahaha.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, why is ｛Amachi＊＊｝\nangry at me and using polite\nlanguage?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think this boat is fairly\nstable...\nAre you not good at riding vehicles,\nSenpai?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406024_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, really?\nI think it's stable, though...\nAre you sick, Senpai?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

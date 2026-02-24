section "b04_m6_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406031_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ehh... There are a variety of fish.");
            }
        else {
            Voice_PlayVoice("B0406031_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa...\nThere are a lot of different fish.");
            }
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ryuujin's Palace...\nI cannot imagine that.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ryuujin's Palace...\nThe sea bream and flounders are\ndancing!\nKidding!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, you're right!\nSuch complex colors...\nThat's a tropical fish, isn't it?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Whoa, you're right! How pretty!\nThat's a tropical fish, right?\nIt's nice and florid.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Haha!\nI actually thought the same thing\ntoo.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, you're such a glutton, Senpai!\n...\nWell, I thought the same thing, too!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406031_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, it's a clione!\nEhh, it's so small...");
            }
        else {
            Voice_PlayVoice("B0406031_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, a clione! Ehh, it's so tiny...");
            }
        Message_MsgSel("It's really cute.", "It's like an angel.", "It'd be a bite to eat for a bigger fish.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It is fluttering around...\nIt is certinaly cute.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nIf it's a clione, it seems like it'd\nbe interesting to have one at\nhome...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "An... angel?\nWell, I understand what you mean by\nthat.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 8);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "An angel?\nIf you watched it eat, you'd\nprobably change your mind.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406031_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nYou say quite scary things, don't\nyou...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406031_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai,is there something about this\nplace that's disturbing you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406031_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The lighting of the Aquarium is\nquite dim.");
            }
        else {
            Voice_PlayVoice("B0406031_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's kinda dark in here.");
            }
        Message_MsgSel("My heart is racing a little.", "It's like we're in the deep ocean.", "It seems like I'd bump into a wall...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh? Why is that?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, why would it be doing that?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I see.\nI feel a little happier knowing\nthat.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406031_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I see!\nIt's exciting, it's like we're on an\nexpedition at the bottom of the\nocean!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406031_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It is certainly not that dark.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406031_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIsn't that because you're a little\nspaced out?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406031_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes.... Feel free to take my hand.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406031_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That. Is. Why! ...\nYou should hold my hand!");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406031_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'll lead you around the place so\nthat you don't bump into anything.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406031_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's fine with me!");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406031_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Geez, I'm going ahead without you,\nthen!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah! Wait, ｛Amachi＊＊｝!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

section "b04_m6_032"{
    int var0 = Date_GetDateOption(2, 5);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 3, 3);
            Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
            Voice_PlayVoice("B0406032_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was showier than I had thought.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 10);
            Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
            Voice_PlayVoice("B0406032_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's quite showy.\nI was fascinated by it, without\nknowing it.");
            }
        Message_MsgSel("I want to try riding on its back.", "It had appeal.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... You want to try riding it?\nYou'll be thrown off, since it goes\nat that speed.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You can't.\nYou'll be thrown off it at those\nspeeds!!");
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
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I was able to enjoy it even\nmore than I thought I would.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nI'm kinda glad that we came to watch\nthe Orca Show!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406032_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, that is correct...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406032_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I know.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(6, 2, (#1));
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406032_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Orcas can jump quite high.\nThat water splash was amazing.");
            }
        else {
            Voice_PlayVoice("B0406032_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So orcas can jump that high.");
            }
        Message_MsgSel("It looked like it felt nice.", "It's putting effort in since it wants sleep.", "Flying fish are more amazing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it really did.\nIt would surely feel nice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nGoing back into the water also\nlooked like it felt nice.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406032_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm...\nIsn't that the normal height that an\norca can jump?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406032_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hang on a sec.\nThe orca doesn't care about that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I have seen them on TV.\nThey are certainly amazing, too.");
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
                Voice_PlayVoice("B0406032_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I've seen them on TV!\nYeah, I also thought that they were\namazing.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406032_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It seems like making it learn just\nthat trick would be hard.\nI wonder how they did it?");
            }
        else {
            Voice_PlayVoice("B0406032_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It has many tricks.\nI wonder how they made it remember\nall those tricks?");
            }
        Message_MsgSel("Isn't it following the fake food?", "With the power of the coach's love.", "That's actually a robot orca.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see.\nWell, it surely would never disobey\nthe people giving it food...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see.\nIt doesn't disobey the people giving\nit food.\nI get it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406032_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou're actually quite a dreamer,\nSenpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406032_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... As if.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406032_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nYou often say such embarrassing\nthings, don't you?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406032_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But I feel a little jealous of that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406032_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Nothing, I was talking to myself!\nSince I was talking to myself, don't\nask me again.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 7, 3);
                Voice_PlayVoice("B0406032_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".........");
                Character_ChFace(0, 7, 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha! You say funny things, Senpai!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406032_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha! That's funny! ...\nI like that joke!!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

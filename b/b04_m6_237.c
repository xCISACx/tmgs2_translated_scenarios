section "b04_m6_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A bike, amazing...");
            }
        else {
            Voice_PlayVoice("B0406235_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh... This bike is amazing...");
            }
        Message_MsgSel("It doesn't have enough speed at all!", "It sounds noisy.", "The acceleration feels amazing!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406235_F03200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh... It was quite fast, wasn't it?\nThe speed...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406235_F03300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Did you watch closely, Senpai?\nIt appeared to be quite fast...");
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
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F03400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes... My ears are starting to hurt.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F03500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, my ears are starting to hurt.\nBut, there's nothing I can do about\nit.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F03600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes!\nIt flew pass in the blink of an eye!");
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
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F03700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh! It went really fast!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F03800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa, dangerous! ...\n*Sigh* It managed to avoid it.");
            }
        else {
            Voice_PlayVoice("B0406235_F03900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa, dangerous! ...\nAh, I barely avoided it!");
            }
        Message_MsgSel("What an amazing technique!", "I was on the edge of my seat.", "They should follow the regulation speed!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I felt they were professionals,\nindeed!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, as expected!\nProfessional techniques are amazing,\nafter all.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes!\nThis is the real thrill of the race!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nThis is the real thrill of the race!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406235_F04400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Uhh, well, isn't this a race?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406235_F04500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Uhh, well, isn't this a race?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F04600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "In today's race, what left an\nimpression?");
            }
        else {
            Voice_PlayVoice("B0406235_F04700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, today's race, what left an\nimpression?");
            }
        Message_MsgSel("The great cheers when they reached the goal!", "The smell of popcorn!", "The Race Queen's big sister!▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The amazing cheering was something.\nI raised my voice with them too.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F04900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that was amazing!\nWhile you're on the circuit, it\ngives you this amazing feeling!!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F05000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Come to think of it, it was being\nsold throughout the race.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F05100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, it was being sold throughout the\nrace.");
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
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406235_F05200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai, are you really a woman?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406235_F05300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Big sister▼...\nWhere did you see that, Senpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #2);
        Parameter_AddCh1Param(6, 62, 2);
        }
    }

section "b04_m1_231"{
    int var0 = Date_GetDateOption(2, 68);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401231_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, that felt nice!");
        Message_MsgSel("Awesome! Let's ride it once more!", "I'm so scared that I can barely stand...", "That was a letdown.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, two more times. Let's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0401231_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "T-That's because you said \"Let's\nride it.\"...\nDon't force yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you serious...?\nI might have underestimated you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401231_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, there's nothing better\nthan the roller coaster.");
        Message_MsgSel("It'd be better without the belt!", "But it's not scary at the back...", "Isn't it? Let's ride at the very front.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "W-Well, I am curious about that,\nthough...\nYou really are a daredevil...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Voice_PlayVoice("B0401231_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No.\nLet's ride it once more at the very\nfront!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Yeah, it is.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401231_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, roller coasters need\nspeed!");
        Message_MsgSel("Rather, more g-force?", "You like it fast?", "I don't like this...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, maybe...\nAnyway, who are you supposed to\nbe...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401231_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, I like it.\nI really like the feeling of cutting\nthrough the wind.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401231_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey you, you should have known that\nit would be like this if you took me\nhere, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401231_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Eh? I see, my bad...\nAll I've been doing is what I\nlike...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Voice_PlayVoice("B0401231_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry.\nWherever you go, I'll tag along with\nyou.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Yay! Well then...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401231_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, as expected, try not to go in\nthe direction of that place.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(\"That\", he said.\nAs expected, it's \"that\" place,\nright?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

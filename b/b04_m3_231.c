section "b04_m3_231"{
    int var0 = Date_GetDateOption(2, 68);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403231_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Ah, that was long.\nI miss being on the ground.");
        Message_MsgSel("Awesome! Let's ride it once more!", "I'm so scared that I can barely stand...", "That was a letdown.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403231_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Are we going to line up again? ...\nI will decline.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403231_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha...\nYou are actually quite a timid\nperson.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403231_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Meaning what?\nDo you want to say that you can ride\neven scarier rides?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403231_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Who made such a thing...");
        Message_MsgSel("The amusement park people.", "Thompson made it in 1884.", "There were lots of requests to make one.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403231_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That is obvious, isn't it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403231_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Who would request such a thing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403231_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Eh, is that the history of roller\ncoasters?\n... I have learned something.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403231_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I wonder what exactly about roller\ncoasters is so fun...");
        Message_MsgSel("As expected, perhaps the speed?", "That exhilarating feeling!", "The expressions of the people who are scared?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403231_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo an important factor is speed,\nhuh.\nI may be able to enjoy this if I get\nused to it by riding it more.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403231_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That requires practice.\nI wonder if the day will come where\neven I can enjoy this...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403231_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... You have got bad hobbies.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403231_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So then were you perhaps...\nenjoying my facial expression?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha...! It's a joke, just a joke!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403231_C01300", 3, "B0403231_C01301");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nThat is a bad thing,\n｛主人公｝.\nFor a moment, I was terribly\nembarrassed.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403231_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right...\nAlthough you said it was a joke, I\nwill not be able to settle down if I\ndo not get revenge.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403231_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAlright, let us ride the roller\ncoaster one more time!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... W-Wait!?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403231_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This time, I will try not to change\nmy facial expression.\nThat is my aim.");
                Voice_PlayVoice("B0403231_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "While I am at it, I will conquer my\nsense of feeling that this is\ndifficult.\nTwo birds with one stone!\nNow, let us line up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝ hates\nlosing...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

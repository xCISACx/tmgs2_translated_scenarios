section "b04_m6_231"{
    int var0 = Date_GetDateOption(2, 68);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Character_ChFace(0, 0, 10);
    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406231_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hah, that was interesting!");
            }
        else {
            Voice_PlayVoice("B0406231_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hah, that was interesting!");
            }
        Message_MsgSel("Awesome! Let's ride it one more time!", "I'm so scared that I can barely stand...", "That was a let down.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nTwo or three more times is good!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah! Once again is fine.\nI could ride it a lot of times,\nthough!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1), 1);
                Voice_PlayVoice("B0406231_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I'm sorry.\nI didn't think you'd find it scary.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1), 1);
                Voice_PlayVoice("B0406231_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, are things like this not good?\n... I'm sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're the expert, Senpai....\nDo you want to try going on\nsomething more awesome?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I know, Senpai!\nLet's go on a better ride then!");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406231_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I raise my voice when I ride on a\nroller coaster.");
            }
        else {
            Voice_PlayVoice("B0406231_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I usually get loud when I ride on a\nroller coaster.");
            }
        Message_MsgSel("Isn't it one of the fun things to enjoy?", "It's challenging trying not to yell.", "There's no room to sing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's right!\nAnd your anticipation rises more!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh, just like that!\nBecause of that, you get more\nanticipation when you get higher!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I see.\nIt seems interesting to endure.\nHowever, it might be impossible.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, have you endured it?\nThough it might be interesting, it's\nimpossible for me to do it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, that seems fun!\nWe should try to compete to see how\nmuch we can sing next time!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that seems to be fun!\nWell then, we'll have a match to see\nhow much we can sing!");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406231_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that was interesting!\nDo you want to get on one more time?");
            }
        else {
            Voice_PlayVoice("B0406231_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that was interesting!\nHey, we should get on one more time!");
            }
        Message_MsgSel("This place is just what I expected!", "Won't it be the 5th time next?", "I'm sorry, I've reached my limit.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "As expected from Senpai!\nWell then, let's go!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Good guess! Then let's go!");
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
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Did we really get on that much?\nOne more time, then we can go after.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406231_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I didn't know it was like that,\nyet.\nStill more to go!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406231_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really...?\nThen we'll go home soon...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406231_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, fine.\nIt's already time to go home for\ntoday.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406231_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, already?! It's hopeless!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry...");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406231_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It's not that.\nIt's not you Senpai, it's me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406231_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I was so happy and into it...\nthat I didn't worry about Senpai.");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406231_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Were you able to endure it the whole\ntime, Senpai?\n... No, I think you were.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406231_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm really sorry.\nI'll be careful from now on......\nW-Will you not hate me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 4, 0);
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406231_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "For the time being, let's take a\nbreak.\nWe can go look at other attractions\nbefore we go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank you, ｛Amachi＊＊｝.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

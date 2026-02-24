section "b04_m4_233"{
    int var0 = Date_GetDateOption(2, 70);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0404233_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*sigh* I feel like I'm seeing white\nspots...");
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1), 1);
            Voice_PlayVoice("B0404233_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "We were only circling around it.\nHow come you feel that way?\nI don't get it～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404233_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It wasn't just a bit too much.\nGet away from me, quick.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404233_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, that would probably suit me,\nbecause it's me!\n... Though I didn't want to ride it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404233_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "After I rode that white horse, I\nfound myself feeling odd...\nHow should I say this, Umm...");
        Message_MsgSel("Just like a prince who's charming▼.", "Would you like for me to take a picture?", "Next time, let's ride the carriage.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404233_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I already know that! ...\nBut, calling me a prince is just a\nbit...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0404233_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't want to see that kind of\nembarrassing photo!\nI'm going to be dead if you take it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404233_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's not as bad as the horses...\nSure.\nSo, next time's going to be the\ncarriage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404233_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "These kinds of rides are for kids.");
        Message_MsgSel("It's a ride for lovers.", "I used to love it when I was young.", "It has nothing to do with age.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0404233_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hmmm...\nThen, does that mean we're not\nsupposed to ride it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404233_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Huh!?\nThen we rode it because we're in\nkoi-- umm, love...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Koi? The pond carp?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404233_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Then that's fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You said it's fine...\nBut you do really mean the other\none...");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404233_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Forget it, it's still \"koi\"!\nI saw it on our way here!\nSo, let's go to the next one, next!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝, what's with\nhim?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404233_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You may be right.\nThis one here is the snazziest ones\nwithin the amusement park.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404233_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm, well, since you've said that,\nyou may be right, but...\nThere's still this resistance....");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

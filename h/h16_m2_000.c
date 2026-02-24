section "h16_m2_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        if (Parameter_GetCh1Param(2, 25) != 1){
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_01F", 0);
                Voice_PlayVoice("H1602000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "They won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. Thanks for supporting them!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1602000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "My support...\nwasn't really a big deal.");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1602000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIt was the players that worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looks a\nlittle sad...)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(2, "M2_01F", 0);
                Voice_PlayVoice("H1602000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It was a good match.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!\nAll the players were so radiant.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H1602000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1602000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If I were amongst the players...\nmy smile might look different.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 2, 5);
                Voice_PlayVoice("H1602000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".... Nothing. I'm glad they won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what's wrong with\n｛Shiba＊＊｝.\nHis face suddenly turned sad...)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "You did it, ｛Shiba＊＊｝!");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1602000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I should still stay focused.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right! I'll keep doing my best!)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "You did it, ｛Shiba＊＊｝!\nThat was an amazing performance!");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1602000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nProbably because I heard your voice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1602000_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Please continue supporting us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course!");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 25) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost...\nEveryone did their best, too...");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1602000_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It can't be helped.\nThe other team were better.\nThat's all.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(But it's still unfortunate...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "They lost......\nThat's very unfortunate......");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H1602000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou can turn this annoyance into\npower.\nThose guys can still improve.\nThe manager, too.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1602000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nSo you should do your best with the\nplayers.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. Thanks, ｛Shiba＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Alright, I have to try even\nharder!)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝, that was bad\nluck...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1602000_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nLet's turn things around and\npractice.\nLet's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I also have to try harder...)");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "That... was bad luck.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H1602000_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah... Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?\nWhy are you apologizing,\n｛Shiba＊＊｝?");
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("H1602000_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Because I want you to smile.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1602000_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We'll win next time.\nSo don't make that face.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah!\nThanks, ｛Shiba＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right. I also have to try my best!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
